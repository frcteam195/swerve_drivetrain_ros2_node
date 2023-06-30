#include "swerve_drivetrain_ros2_node/swerve_drivetrain_ros2_node.hpp"

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include <thread>
#include <string>
#include <mutex>
#include <atomic>
#include <sys/stat.h>

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <array>

#include "ck_utilities_ros2_node/node_handle.hpp"

#define NODE_NAME "swerve_drivetrain_ros2_node"

rclcpp::Node::SharedPtr node_handle;

class LocalNode : public ParameterizedNode
{
public:
    LocalNode() : ParameterizedNode(NODE_NAME)
    {

    }

    ~LocalNode()
    {

    }

private:

};

int main(int argc, char **argv)
{
	rclcpp::init(argc, argv);
    node_handle = std::make_shared<LocalNode>();
    rclcpp::spin(node_handle);
    rclcpp::shutdown();
    return 0;
}