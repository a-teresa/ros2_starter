#include "/rclcpp/rclcpp/rclcpp.hpp"


class MyCustomeNode: public rclcpp::Node
{
 public:
    MyCustomNode() : Node("my_node")
    {
    }
  private:
}

int main(int argc, char ** argv)
{
  rclpp::init(argc, argv);
  auto node = std::make_shared<MyCustomNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0; 
}