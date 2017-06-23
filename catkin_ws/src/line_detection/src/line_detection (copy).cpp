#include <ros/ros.h>
// PCL specific includes
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/filters/voxel_grid.h>
#include <math.h> 

ros::Publisher pub1;
ros::Publisher pub2;
ros::Publisher pub3;

void 
cloud_cb (const sensor_msgs::PointCloud2ConstPtr& input)
{
  // Create a container for the data.
  sensor_msgs::PointCloud2 output1;
  sensor_msgs::PointCloud2 output2;
  sensor_msgs::PointCloud2 output3;

  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_p (new pcl::PointCloud<pcl::PointXYZ>);
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_f (new pcl::PointCloud<pcl::PointXYZ>);
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_k (new pcl::PointCloud<pcl::PointXYZ>);
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_l (new pcl::PointCloud<pcl::PointXYZ>);
  //pcl::PointCloud<pcl::PointXYZ> cloud_l;

  pcl::PointCloud<pcl::PointXYZ> cloud;

  pcl::PointCloud<pcl::PointXYZ> cloud_filtered0;
  pcl::PointCloud<pcl::PointXYZ> cloud_filtered;

  pcl::fromROSMsg (*input, cloud);

  // Removing Outliers
  pcl::StatisticalOutlierRemoval<pcl::PointXYZ> sor;
  sor.setInputCloud (cloud.makeShared ());
  sor.setMeanK (50);
  sor.setStddevMulThresh (1.0);
  sor.filter (cloud_filtered0);


  // Perform Voxel filtering
  pcl::VoxelGrid<pcl::PointXYZ> filt;
  filt.setInputCloud (cloud_filtered0.makeShared ());
  filt.setLeafSize (0.01, 0.01, 0.01);
  filt.filter (cloud_filtered);


  pcl::ModelCoefficients::Ptr coefficients (new pcl::ModelCoefficients ());
  pcl::PointIndices::Ptr inliers (new pcl::PointIndices ());

  // Create the segmentation object
  pcl::SACSegmentation<pcl::PointXYZ> seg;

  // Optional
  seg.setOptimizeCoefficients (true);

  // Mandatory
  seg.setModelType (pcl::SACMODEL_PLANE);
  seg.setMethodType (pcl::SAC_RANSAC);
  seg.setDistanceThreshold (0.01);

  seg.setInputCloud (cloud_filtered.makeShared ());
  seg.segment (*inliers, *coefficients);


  // Create the filtering object
  pcl::ExtractIndices<pcl::PointXYZ> extract;

  // Extract the inliers
  extract.setInputCloud (cloud_filtered.makeShared ());
  extract.setIndices (inliers);
  extract.setNegative (false);
  extract.filter (*cloud_p);


  extract.setNegative (true);
  extract.filter (*cloud_f);


  /////

  seg.setInputCloud (cloud_f);
  seg.segment (*inliers, *coefficients);

  extract.setInputCloud (cloud_f);
  extract.setIndices (inliers);
  extract.setNegative (false);
  extract.filter (*cloud_k);

  //extract.setNegative (true);
  //extract.filter (*cloud_l);

  /////

*cloud_l=*cloud_p;


//ROS_INFO("%zu\n", cloud_l->size());


  int k=0;

  for (size_t i = 0; i < cloud_p->size (); ++i)
  {
   for (size_t j = 0; j < cloud_k->size (); ++j)
   {
     if (pow(cloud_p->points[i].x-cloud_k->points[j].x,2)+pow(cloud_p->points[i].y-cloud_k->points[j].y,2)+pow(cloud_p->points[i].z-cloud_k->points[j].z,2)<.004)
    {

      cloud_l->points[k]=cloud_p->points[i];
      k=k+1;
      break;
    }
   }
  }

for (size_t m = k; m < cloud_p->size (); ++m)
{
  cloud_l->points[m].x=0;
  cloud_l->points[m].y=0;
  cloud_l->points[m].z=0;
}


  /////

  pcl::toROSMsg(*cloud_p, output1);

  // Publish the data.
  pub1.publish (output1);

   pcl::toROSMsg(*cloud_k, output2);

  // Publish the data.
  pub2.publish (output2);

  pcl::toROSMsg(*cloud_l, output3);

  // Publish the data.
  pub3.publish (output3);


}

int
main (int argc, char** argv)
{
  // Initialize ROS
  ros::init (argc, argv, "line_detection");
  ros::NodeHandle nh;

  // Create a ROS subscriber for the input point cloud
  ros::Subscriber sub = nh.subscribe ("/rtabmap/cloud_map", 1, cloud_cb);
  //ros::Subscriber sub = nh.subscribe ("/camera/depth/points", 1, cloud_cb);

  // Create a ROS publisher for the output point cloud
  pub1 = nh.advertise<sensor_msgs::PointCloud2> ("output1", 1);

  pub2 = nh.advertise<sensor_msgs::PointCloud2> ("output2", 1);

  pub3 = nh.advertise<sensor_msgs::PointCloud2> ("output3", 1);

  // Spin
  ros::spin ();
}
