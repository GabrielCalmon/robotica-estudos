#include <iostream>
 
using namespace std;
 
int main() {
 
    int idade=0;
    int count=0;
    int sum=0;
    while (true)
    {
        cin >> idade;
        if(idade<0)
            break;
        sum+=idade;
        count++;
    }
    float media=float(sum)/float(count);
    printf("%0.2f\n",media);
 
    return 0;
}