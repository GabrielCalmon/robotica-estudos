#include <iostream>
#include <cmath>
#include<string>

using namespace std;

int main()
{
    string single, multi;
    string strConstructor("Criada com o constructor");

    // cout << "lerei apenas até o primeiro espaço em branco:" << endl;
    // cin >> single;
    // cout << "armazenei " << single << endl << endl;

    cout << "lerei até o 'enter':" << endl;
    getline(cin, multi);
    cout << "armazenei " << multi << endl;

    for(int i=0; i<multi.length(); i++){
        cout << multi.at(i) << endl;
    }
    
    return 0;
}