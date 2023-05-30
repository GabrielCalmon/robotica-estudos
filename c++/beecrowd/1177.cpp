#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    int atu=0;
    int n[1000];

    cin >> t;
    for(int i=0; i<1000; i++){
        n[i]=atu;
        atu++;
        if(atu == t)
            atu=0;
    }

    for(int i=0; i<1000; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
 
    return 0;
}