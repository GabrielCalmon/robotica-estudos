#include <iostream>
 
using namespace std;

/*
Populacao A > Pop_B
*/

int main(){
    int nTestes;
    cin >> nTestes;
    for(int i =0; i<nTestes; i++){
        int popA, popB;
        double taxaA, taxaB;
        cin >> popA;
        cin >> popB;
        cin >> taxaA;
        cin >> taxaB;

        int duracao = 0;
        while(duracao <=100){
            // cout << popA << endl;
            // cout << popB << endl;
            // cout << duracao << endl << endl;
            
            popA=int(popA*(1.0 + taxaA/double(100)));
            popB=int(popB*(1.0 + taxaB/double(100)));

            // cout << popA << endl;
            // cout << popB << endl;
            // cout << duracao << endl << endl;
            
            duracao++;

            if(popA>popB){
                break;
            }
        }
        if(duracao <= 100){
            cout << duracao << " anos." << endl;
        } else {
            cout << "Mais de 1 seculo." << endl;
        }
    }

    return 0;
}