/*
    Autor: Gabriel Calmon
    Data: 05/05/2022
    Objetivo: gerar o triângulo de Pascal de retornar ao usuário o elemento informado por meio do número da linha e coluna

    Obs: para fins de representação no terminal o triângulo foi representado como um triângulo retângulo
*/

#include <iostream>

using namespace std;

int main()
{
    int lineInput=5, rowInput=3;
    cout << "(a contagem das linhas e colunas se inicia do zero)" << endl;
    while (true)
    {
        cout << "Insira o número da linha: ";
        cin >> lineInput;

        if(lineInput>0)
            break;
        else
            cout << "entrada inválida, o número da linha deve ser maior do que zero" << endl;
    }

    while (true)
    {
        cout << "Insira o número da coluna: ";
        cin >> rowInput;

        if (rowInput>lineInput){
            cout << "entrada inválida, o número da linha não pode ser superior ao da coluna" << endl;
        } else if(rowInput<0){
            cout << "entrada inválida, o número da linha deve ser maior do que zero" << endl;
        } else 
            break;
    }
    
    
    int pascal[lineInput][lineInput];   // foi criada uma matriz quadrada de lado lineInput, isso porque ele é o pior cenário: ocorre na última linha e última coluna
    
    int elementsPerLine = 1;    // variável reponsável por contralar quantos elementos cada linha tem, crescendo uma unidade por nova linha

    cout << "Esse é o triângulo de Pascal gerado";
    for(int l =0; l < lineInput; l++){
        for(int c = 0; c < elementsPerLine; c++){
            if(c == 0 || c == elementsPerLine-1){
                // As bordas diagonais do triângulo são sempre iguais a 1, ou seja, o primeiro e último elemento de cada linha
                pascal[l][c] = 1;
            } else {
                // busca 2 elementos da linha anterior (l-1): um na mesma coluna(1) e outro na coluna anterior (c-1)
                pascal[l][c] = pascal[l-1][c-1] + pascal[l-1][c];
            }
            
            cout << pascal[l][c] << " ";    // Separador entre os números
        }
        elementsPerLine++;
        cout << endl;
    }
    cout << endl << "O número na posição digitada é: ";
    cout << endl << pascal[lineInput-1][rowInput-1] << endl;
    return 0;
}