#include <iostream>

using namespace std;

int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main () {
    int x, y, z;
    cin >> x >> y >> z;
    cout << z << endl;
        
    return 0;
}