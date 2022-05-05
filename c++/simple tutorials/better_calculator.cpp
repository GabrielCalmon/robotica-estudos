#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char op;
    cout << "Primeiro número: ";
    cin >> num1;

    cout << "Operação: ";
    cin >> op;
    
    cout << "Segundo número: ";
    cin >> num2;

    
    
    cout << endl << "O resultado foi: ";
    if(op == '+'){
        cout << num1 + num2 << endl;
    } else if (op == '-'){
        cout << num1 - num2 << endl;
    } else if (op == '*'){
        cout << num1 * num2 << endl;
    } else if (op == '/'){
        cout << num1 / num2 << endl;
    } else {
        cout << "Erro: operação inválida" << endl << endl;
    }
    return 0;
}