#include <ros/ros.h>
// PCL specific includes
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/search/kdtree.h>
#include <pcl/features/normal_3d.h>
#include <pcl/features/don.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/filters/voxel_grid.h>
#include <math.h> 

ros::Publisher pub;
ros::Publisher pub1;


void 
cloud_cb (const sensor_msgs::PointCloud2ConstPtr& input)
{
  // Create a container for the data.
  sensor_msgs::PointCloud2 output;
  sensor_msgs::PointCloud2 output1;

  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_p (new pcl::PointCloud<pcl::PointXYZ>);


  pcl::PointCloud<pcl::PointXYZ> cloud;

  pcl::PointCloud<pcl::PointXYZ> cloud_filtered;

  pcl::fromROSMsg (*input, cloud);

  // Perform Voxel filtering
  pcl::VoxelGrid<pcl::PointXYZ> filt;
  filt.setInputCloud (cloud.makeShared ());
  filt.setLeafSize (0.02, 0.02, 0.02);
  filt.filter (cloud_filtered);


  // Removing Outliers
  pcl::StatisticalOutlierRemoval<pcl::PointXYZ> sor;
  sor.setInputCloud (cloud_filtered.makeShared ());
  sor.setMeanK (50);
  sor.setStddevMulThresh (0.8);
  sor.filter (cloud_filtered);


  /// Create a search tree
  pcl::search::KdTree<pcl::PointXYZ>::Ptr tree (new pcl::search::KdTree<pcl::PointXYZ> ());

  /// Define object for Normal estimation
  pcl::NormalEstimation<pcl::PointXYZ, pcl::Normal> ne;
  ne.setInputCloud (cloud_filtered.makeShared ());
  ne.setSearchMethod (tree);

  /**
   * NOTE: setting viewpoint is very important, so that we can ensure
   * normals are all pointed in the same direction!
   */
  //ne.setViewPoint (std::numeric_limits<float>::max (), std::numeric_limits<float>::max (), std::numeric_limits<float>::max ());

  /// Compute Normals using small naighboring radius
  pcl::PointCloud<pcl::Normal>::Ptr normals_small_scale (new pcl::PointCloud<pcl::Normal>);

  ne.setRadiusSearch (0.04);
  ne.compute (*normals_small_scale);


  /// Compute Normals using small naighboring radius
  pcl::PointCloud<pcl::Normal>::Ptr normals_large_scale (new pcl::PointCloud<pcl::Normal>);

  ne.setRadiusSearch (0.07);
  ne.compute (*normals_large_scale);

/*
  // Create output cloud for DoN results
  PointCloud<PointNormal>::Ptr doncloud (new pcl::PointCloud<PointNormal>);
  copyPointCloud<PointXYZRGB, PointNormal>(*cloud, *doncloud);

  // Create DoN operator
  pcl::DifferenceOfNormalsEstimation<PointXYZRGB, PointNormal, PointNormal> don;
  don.setInputCloud (cloud);
  don.setNormalScaleLarge (normals_large_scale);
  don.setNormalScaleSmall (normals_small_scale);

  if (!don.initCompute ())
  {
    std::cerr << "Error: Could not intialize DoN feature operator" << std::endl;
    exit (EXIT_FAILURE);
  }

  // Compute DoN
  don.computeFeature (*doncloud);
*/

  int k=0;
  
  *cloud_p=cloud_filtered;
  
  for (size_t i=0; i<cloud_filtered.size();++i)
  {
     if (pow(normals_large_scale->points[i].normal_x-normals_small_scale->points[i].normal_x,2)
         +pow(normals_large_scale->points[i].normal_y-normals_small_scale->points[i].normal_y,2)
         +pow(normals_large_scale->points[i].normal_z-normals_small_scale->points[i].normal_z,2)>.06)
     {
        cloud_p->points[k]=cloud_filtered.points[i];
        ++k;
     }
  }

  for (size_t m = k; m < cloud_p->size (); ++m)
  {
     cloud_p->points[m].x=0;
     cloud_p->points[m].y=0;
     cloud_p->points[m].z=0;
  }


  // Removing Outliers
  sor.setInputCloud (cloud_p);
  sor.setMeanK (10);
  sor.setStddevMulThresh (2);
  sor.filter (*cloud_p);

  /////

  pcl::toROSMsg(*cloud_p, output);

  // Publish the data.
  pub.publish (output);


  pcl::toROSMsg(cloud_filtered, output1);

  // Publish the data.
  pub1.publish (output1);


}

int
main (int argc, char** argv)
{
  // Initialize ROS
  ros::init (argc, argv, "line_detection");
  ros::NodeHandle nh;

  // Create a ROS subscriber for the input point cloud
  //ros::Subscriber sub = nh.subscribe ("/rtabmap/cloud_map", 1, cloud_cb);
  ros::Subscriber sub = nh.subscribe ("/camera/depth/points", 1, cloud_cb);

  // Create a ROS publisher for the output point cloud
  pub = nh.advertise<sensor_msgs::PointCloud2> ("output", 1);
  
  pub1 = nh.advertise<sensor_msgs::PointCloud2> ("output1", 1);


  // Spin
  ros::spin ();
}
