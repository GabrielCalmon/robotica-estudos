#include <iostream>

using namespace std;

string getDayName(int number){
    string dayName;
    switch(number){
        case 0:
            dayName = "Domingo";
            break;
        case 1:
            dayName = "Segunda-feira";
            break;
        case 2:
            dayName = "terça-feira";
            break;
        default:
            dayName = "Caso inválido ou não implementado";
            break;
    }

    return dayName;
}

int main()
{
    int dayNumber;

    cout << "Número do dia da semana: ";
    cin >> dayNumber;

    

    cout << getDayName(dayNumber) << endl;

    
    return 0;
}