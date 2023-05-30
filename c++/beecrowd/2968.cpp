#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int voltas, placas;
    cin >> voltas;
    cin >> placas;

    int pTotal = voltas*placas; // numero total de placas
    for(int i=1; i<=9; i++){
        // cout << i << endl;
        int marca = ceil(double(pTotal)*i/10);
        if(i==9){
            cout << marca << endl; 
        } else {
            cout << marca << " "; 
        }
               
    }
 
    return 0;
}