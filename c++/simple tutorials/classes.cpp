#include <iostream>
using namespace std;

class PlayerClass {
    public:
        string name;
        int maxHp;
        int currentHp;

        PlayerClass(){
            name = "espectador";
            maxHp = 0;
            currentHp = 0;
        }

        PlayerClass(string aName, int aMaxHp){
            cout << "novo controle conectado" << endl;
            name = aName;
            maxHp = aMaxHp;
            currentHp = aMaxHp;
        }

        bool isAlive(){
            if(currentHp > 0)
                return true;
            return false;
        }

         
};

int main()
{
    PlayerClass player1("peter", 100);
    PlayerClass player2("carl", 75);
    PlayerClass guest();

    return 0;
}