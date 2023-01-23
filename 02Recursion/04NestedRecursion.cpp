#include <iostream>
using namespace std;

int fun(int n) {
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}

int main()
{
    int x=100;
    int res = fun(x);
    cout<<"Result is "<<res<<endl;
    return 0;
}