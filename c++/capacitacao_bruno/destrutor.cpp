#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <memory>

 


class ExampleNode {
  public:
    ExampleNode(const std::string& name) {
        this->node_name_ = name;
        std::cout << "Node Created!" << std::endl;
    }
    ~ExampleNode() {
        std::cout << "Node named '"<< this->node_name_ <<"'destroyed!" << std::endl;
    }
    std::string getNodeName() {
        return node_name_;    
    }
  private:
    std::string node_name_;
};
int main() {
    std::shared_ptr<ExampleNode> node_ptr;
    
    node_ptr = std::make_shared<ExampleNode>("first_node");
    std::cout << "The node_name_ accessed by -> is: " << node_ptr->getNodeName() << std::endl;
    std::cout << "The memory address allocated is: " << node_ptr.get() << std::endl;

    auto another_node_ptr = std::make_shared<ExampleNode>("second_node");
    std::cout << "The node_name_ accessed by -> is: " << another_node_ptr->getNodeName() << std::endl;
    std::cout << "The memory address allocated is: " << another_node_ptr.get() << std::endl;

    auto third_node_ptr = std::make_shared<ExampleNode>("third_node");
    std::cout << "The node_name_ accessed by -> is: " << third_node_ptr->getNodeName() << std::endl;
    std::cout << "The memory address allocated is: " << third_node_ptr.get() << std::endl;

    auto forth_node_ptr = std::make_shared<ExampleNode>("forth_node");
    std::cout << "The node_name_ accessed by -> is: " << forth_node_ptr->getNodeName() << std::endl;
    std::cout << "The memory address allocated is: " << forth_node_ptr.get() << std::endl;
}