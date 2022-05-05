#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int myNum;
    cout << "enter your int number: " ;
   // cin  >> myNum;

    string name;
    cout << "enter your name: ";
    getline(cin, name);             // essa função é específica para string

    cout << "Hello " << name << endl;

    return 0;
}