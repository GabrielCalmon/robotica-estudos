#include <iostream>
#include <fstream>
using namespace std;

// int main(){
//     ofstream MyFile("temp.txt");
//     MyFile << "something comes here\nAnd here too";
//     MyFile.close();
//     return 0;
// }

int main(){
    string myString;
    ifstream MyReadText("temp.txt");

    while (getline(MyReadText,myString))
    {
        cout << myString << endl;
    }
    
    return 0;
}