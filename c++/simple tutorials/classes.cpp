#include <iostream>
using namespace std;

class PlayerClass {
    private:
        string unique_code;
        int currentHp;
    public:
        string name;
        int maxHp;

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

         void changeHp(int newHp){
             if(newHp<0){
                newHp = 0;
             } else if(newHp>maxHp){
                newHp = maxHp;
             }
            currentHp = newHp;
         }

         int getCurrentHp(){
            return currentHp;
         }

         void UseEspecialMove(){
             cout << "Movimento especial utilizado" << endl;
         }
};

class EspecialPlayer : public PlayerClass{
    // overriding function
        void UseEspecialMove(){
             cout << "Movimento especial utilizado pelo super player" << endl;
         }
};

int main()
{
    PlayerClass player1("peter", 100);
    PlayerClass player2("carl", 75);
    PlayerClass guest();


    return 0;
}