#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int l, c, r1, r2;
    
    while (true)
    {
        char possivel='N';
        cin >> l >> c >> r1 >> r2;
        if(l+c+r1+r2 == 0){
            break;
        }

        // verificar se cabe no elevador
        if(2*r1 < l || 2*r1 < c)
            break;

        if(2*r2 < l || 2*r2 < c)
            break;

        int cilindros = 2*(r1+r2);
        
        // essa comparacao com a diagonal esta ERRADA
        float diagonal = sqrt(pow(l, 2) + pow(c, 2));
        cout << diagonal << endl;
        cout << 2*(r1+r2) << endl;
        // lado || altura || diagonal
        if(2*(r1+r2) >= l || 2*(r1+r2) >= c || float(2*(r1+r2)) >= float(diagonal)){
            possivel='S';
        }

        cout << possivel << endl;
    }
    
        
    return 0;
}