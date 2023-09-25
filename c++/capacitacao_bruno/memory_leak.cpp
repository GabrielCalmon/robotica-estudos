#include <iostream>
#include <string>
#include <vector>
#include <thread>
// #include <cstdlib>

#include <vector>

class Driver{
    private:
        std::string uri_address;
        long long int number[100000];
        double dnumber[100000];
        char word[100000];
};

int main(){
    Driver *driver_ptr;
    while (true)
    {
        driver_ptr = new Driver();
        std::this_thread::sleep_for(std::chrono::microseconds(1));
        // std:chrono::microseconds
        std::cout << driver_ptr << std::endl;
        // std::cout
    }
    
}