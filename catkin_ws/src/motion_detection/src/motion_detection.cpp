#include <ros/ros.h>
// PCL specific includes
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/kdtree/kdtree_flann.h>
#include <pcl/kdtree/impl/kdtree_flann.hpp>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/voxel_grid.h>
#include <math.h>
#include <pcl/registration/icp.h>
#include <thread>
#include <pcl/filters/filter.h>
#include <pcl/features/normal_3d.h>

ros::Publisher pub;

double start_time;

//pcl::PointCloud<pcl::PointXYZ> cloud_Background,cloud_Background_copy;

pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_Background (new pcl::PointCloud<pcl::PointXYZ> ());
pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_Background_copy (new pcl::PointCloud<pcl::PointXYZ> ());

pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_Lastptr (new pcl::PointCloud<pcl::PointXYZ> ());

//pcl::IterativeClosestPoint<pcl::PointXYZ, pcl::PointXYZ> icp;

//double start_time=gettime;

/*
void icp_calculation (pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_input = boost::shared_ptr<pcl::PointCloud<pcl::PointXYZ>> (), pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_output = boost::shared_ptr<pcl::PointCloud<pcl::PointXYZ>> ())
{

     icp.setInputSource(cloud_input);
     icp.setInputTarget(cloud_output);
     pcl::PointCloud<pcl::PointXYZ> Final;
     icp.align(Final);

}

*/



void 
cloud_cb (const sensor_msgs::PointCloud2ConstPtr& input)
{
  // Convert the sensor_msgs/PointCloud2 data to pcl/PointCloud
  pcl::PointCloud<pcl::PointXYZ> cloud;
  pcl::fromROSMsg (*input, cloud);

  
  pcl::PointCloud<pcl::PointXYZ> cloud1;
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloudptr (new pcl::PointCloud<pcl::PointXYZ> ());

  std::vector<int> indices_src;
  pcl::removeNaNFromPointCloud(cloud,cloud1, indices_src);

  pcl::copyPointCloud(cloud1, *cloudptr);

  pcl::PointCloud<pcl::PointXYZ> cloud_filtered;

  // Perform the actual filtering
  pcl::VoxelGrid<pcl::PointXYZ> sor;
  sor.setInputCloud (cloudptr);
  sor.setLeafSize (0.05, 0.05, 0.05);
  sor.filter (cloud_filtered);

  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filteredptr (new pcl::PointCloud<pcl::PointXYZ> ());
  pcl::copyPointCloud<pcl::PointXYZ,pcl::PointXYZ>(cloud_filtered, *cloud_filteredptr);


  if (ros::Time::now().toSec()-start_time<1)
      *cloud_Background=*cloud_filteredptr;

  pcl::copyPointCloud<pcl::PointXYZ,pcl::PointXYZ>(*cloud_Background, *cloud_Background_copy);  


  pcl::KdTreeFLANN<pcl::PointXYZ> match_search;

  pcl::ExtractIndices<pcl::PointXYZ> extract; 
  extract.setNegative (true); 

  //  For each scene keypoint descriptor, find nearest neighbor into the model keypoints descriptor cloud and add it to the correspondences vector.

  int i = 0;
  while (cloud_filteredptr->size ()>1 and i<cloud_Background_copy->size())
  {

    match_search.setInputCloud (cloud_filteredptr);

    extract.setInputCloud (cloud_filteredptr);

    //ROS_INFO("Size of Cloud = %zu",cloud_filteredptr->size());

    std::vector<int> neigh_indices (1);
    pcl::PointIndices::Ptr inliers (new pcl::PointIndices ());
    std::vector<float> neigh_sqr_dists (1);
    if (cloud_Background_copy->at(i).x!=cloud_Background_copy->at(i).x) //skipping NaNs
    {
      continue;
    }
    int found_neighs = match_search.nearestKSearch (cloud_Background_copy->at(i), 10, neigh_indices, neigh_sqr_dists);
    if(neigh_sqr_dists[0] < 0.1f) //  add match only if the squared descriptor distance is less than 0.25 (SHOT descriptor distances are between 0 and 1 by design)
    {
     
    //std::vector<int> remove_indices; 
    //remove_indices.push_back(i);
    //inliers->indices=remove_indices; 

    inliers->indices=neigh_indices;
    extract.setIndices (inliers);
    extract.filter (*cloud_filteredptr);

    }
   ++i;
  }


  if (fmod((double)(ros::Time::now().toSec()-start_time) , 3) >2.5 and fmod((double)(ros::Time::now().toSec()-start_time) , 2) <2.8)
{
      *cloud_Lastptr = *cloud_filteredptr;
       ROS_INFO("Hello = %d", (int)(ros::Time::now().toSec()-start_time));

}
  if (cloud_Lastptr->size()>10 and cloud_filteredptr->size()>10)
    {
     ROS_INFO("Size of Cloud Last= %zu",cloud_Lastptr->size());
     ROS_INFO("Size of Cloud = %zu",cloud_filteredptr->size());


//     std::thread t1(icp_calculation,std::move(cloud_Lastptr),std::move(cloud_filteredptr));
//     t1.detach();

/*
     icp.setInputSource(cloud_Lastptr);
     icp.setInputTarget(cloud_filteredptr);
     pcl::PointCloud<pcl::PointXYZ>::Ptr Final (new pcl::PointCloud<pcl::PointXYZ> ());
     icp.align(*Final);

     ros::Duration d = ros::Duration(1, 0);
     d.sleep();

     //ROS_INFO("has converged : %d", icp.hasConverged());
*/




    }


  // Convert to ROS data type
  sensor_msgs::PointCloud2 output;
  pcl::toROSMsg(*cloud_filteredptr,output);

  // Publish the data
  pub.publish (output);



}

int
main (int argc, char** argv)
{
  // Initialize ROS
  ros::init (argc, argv, "my_pcl_tutorial");
  ros::NodeHandle nh;

  start_time =ros::Time::now().toSec();

  // Create a ROS subscriber for the input point cloud
  ros::Subscriber sub = nh.subscribe ("input", 1, cloud_cb);

  // Create a ROS publisher for the output point cloud
  pub = nh.advertise<sensor_msgs::PointCloud2> ("output", 1);

  // Spin
  ros::spin ();
}
