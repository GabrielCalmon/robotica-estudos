#include <iostream>
#include <fstream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
    string path = argv[0];  // fornece o caminho do arquivo que está sendo executado
    path += ".cpp";         //concatena o caminho obtido com a extensão .cpp
    //cout << path << endl;

    ifstream file(path);   //busca o arquivo em execução com base no argv
    if(!file.is_open()){
        cout << "arquivo não encontrado" << endl;
        return 0;
    }
        
    string input;           // variavel que armazena uma linha por vez do arquivo
    char temp = file.get();
    while (temp != EOF)     // se mantem no loop ate o EOF
    {
        cout << temp;
        temp = file.get();
    }
    return 0;
}