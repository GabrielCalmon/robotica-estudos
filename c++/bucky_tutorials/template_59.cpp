#include <iostream>
using namespace std;

template <class FIRST, class SECOND>

auto smaller(FIRST a, SECOND b){
    return(a<b?a:b);
}
int main()
{
    int x =100;
    double y=66.21;
    cout << smaller(x, y) << endl;
    return 0;
}
