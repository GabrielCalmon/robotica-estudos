#include <iostream>
#include <fstream>
#include<vector>

using namespace std;

/*int main()
{
    ifstream file("my_text.txt");   //aparentemente ele só busca na mesma página
    //ifstream file("read_file.cpp");
    vector<string> lines;

    string input;           // variavel que armazena uma linha por vez do arquivo
   
    while (file >> input)   // se mantem no loop ate o EOL
    {
        lines.push_back(input);     // funciona como o 'append' das listas do python
    }
    
    for(string temp_lines : lines){
        cout << temp_lines << endl;
    }

    return 0;

    //char temp = file.get();       // método que retorna um char por vez
    //
}*/

int main()
{
    ifstream file("my_text.txt");   //aparentemente ele só busca na mesma página
    //ifstream file("read_file.cpp");

    string input;           // variavel que armazena uma linha por vez do arquivo
    
    /*while (temp != EOF)   // se mantem no loop ate o EOF
    {
        cout << temp;
        temp = file.get();
    }*/
    char temp;
    for(int i=0; i<9; i++){
        char temp = file.get();
        cout << temp << endl;
    }
    return 0;

    //char temp = file.get();       // método que retorna um char por vez
    //
}

/*int main()
{
    ifstream file("my_text.txt");   //aparentemente ele só busca na mesma página
    //ifstream file("read_file.cpp");

    string line;           // variavel que armazena uma linha por vez do arquivo
    getline(file, line);
    cout << line << '\n';
    return 0;
}*/