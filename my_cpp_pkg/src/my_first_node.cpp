#include "/rclcpp/rclcpp/rclcpp.hpp"

class MyNode: public rclcpp::Nodes
{
public:
MyNode(): Node("cpp_test"), counter_(0)
{
    RCLCPP_INFO(this->get_logger(), "Hello Cpp Node")

    timer_= this.create_wall_timer(std::chrono::seconds(1), 
    std::bind(&MyNode::timerCallback, this));
}
private:
void timerCallback()
{
    counter_++; 
    RCLCPP_INFO(this->get_logger(), "Hello %d",counter_)

}
rclcpp::TimerBase::SharedPtr timer;
int counter_;
} 

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);//initialize ros2 communication
    //auto node = std::make_shared>rclcpp::Node>("cpp_test");
    auto node = std::make_shared<MyNode>();//create sharepointer to the node
    RCLCPP_INFO(node->get_logger(), "Hello Cpp Node")
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
} 