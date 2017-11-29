#include <ros/ros.h>

int main(int argc, char ** argv){
  ros::init(argc, argv, "my_param_fetcher");

  ros::NodeHandle node;

  std::string local_s;

  node.param<std::string>("my_str", local_s, "default_blah");

  int local_i;

  node.param("my_int", local_i, 17);
  while (node.ok()){
  ROS_INFO("Got string param: %s", local_s.c_str());
  ROS_INFO("Got int param: %d", local_i);
  }
  
  return 0;
}
