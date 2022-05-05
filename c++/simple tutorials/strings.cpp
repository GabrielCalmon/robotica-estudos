#include <iostream>

using namespace std;

int main()
{
    string phrase = "Hello_world";
    cout << "Número de caracteres: " << phrase.length() << endl;
    cout << "Primeiro caractere caracteres: " << phrase[0] << endl;

    cout << phrase.find("world", 0) << endl;

    cout << phrase.substr(3, 4) << endl;        // subsection da string (de onde começa, quantos caracteres para a frente, direia)

    phrase[0] = 'G';
    cout << "\n" << "A string agora é: " << phrase << endl;
    
    return 0;
}