#include <iostream>
using namespace std;

int main(){
    std::string text = "Hello world " + std::to_string(98);
    cout << text << endl;
    return 0;
}