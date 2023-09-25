#include <iostream>
#include <string.h>
#include<algorithm>

using namespace std;

int countSlashes(const string &str);

int main(){
    string myStr;
    cout << "Type your string: " << endl;

    getline(cin, myStr);

    cout << "Adress at main(): " << &myStr << endl;
    countSlashes(myStr);
    return 0;
}

// SEMPRE passe tipo nao primitivo atraves de const ref
int countSlashes(const string &str){
    int occurrences = count(str.begin(), str.end(), '/');
    cout << "Adress at countSlashes(): " << &str << endl;
    cout << occurrences << " '/' were found" << endl;
    return occurrences;
}