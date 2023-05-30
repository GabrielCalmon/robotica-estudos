#include <iostream>
#include <string>
 
using namespace std;
/*
    ’C’ -> Chains of Ice
    ’D’ -> Death Grip
    ’O’ -> Obliterate
    Se CD, perdeu
*/
int main() {
    int linhas, winSum=0;
    string seq;
    cin >> linhas;
    while(linhas>0){
        //cout << linhas << endl;
        int win=1;
        cin >> seq;
        char ant, atu;
        for(int i=0; i< seq.length(); i++){
            atu=seq[i];
            if(i!=0){
                if(ant=='C' && atu=='D'){
                    //cout << "perdi" << endl;
                    win=0;
                }
            }
            ant = atu;
        }
        
        if(win){
            winSum++;
        }
            

        linhas--;
    }
    cout << winSum << endl;
    return 0;
}