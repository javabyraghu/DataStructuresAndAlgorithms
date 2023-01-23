#include <iostream>
using namespace std;
int fact(int n) {
    if(n==0)
        return 1;
    else 
        return fact(n-1)*n; 
}
int factLoop(int n) {
    int fact = 1;
    for(int i=1;i<=n;i++) {
        fact*=i;
    }
    return fact;
}

int main()
{
    int x=5;
    //int res = fact(x);
    int res = factLoop(x);
    cout<<"Result is "<<res<<endl;
    return 0;
}