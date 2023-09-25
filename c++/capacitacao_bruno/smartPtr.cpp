#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <memory>

class ExampleNode{
    public:
        ExampleNode(const std::string& name){
            this->node_name_ = name;
            std::cout << "Node Created!" << std::endl;
        }

        std::string getNodeName() {
            return node_name_;
        }
    private:
        std::string node_name_;
};

int main(){
    std::shared_ptr<ExampleNode> node_ptr;

    node_ptr = std::make_shared<ExampleNode>("example_node");

    std::cout << "The node_nome_ accessed by '->' is: " << node_ptr->getNodeName() << std::endl;
    std::cout << "The memory address allocated is: " << node_ptr.get() << std::endl;
    std::cout << "The memory address allocated is: " << node_ptr << std::endl;
}