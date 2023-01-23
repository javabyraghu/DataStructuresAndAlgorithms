#include <iostream>
using namespace std;
int fib(int n) {
    int s=0;
    int t0=0,t1=1;
    if(n<=1)
        return n;
    for(int i=2;i<=n;i++) {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int rfib(int n){
    if(n<=1) return n;
    return rfib(n-2) + rfib(n-1);
}
//---Memorization formation--------
int F[10] ;
int mfib(int n) {
    if(n<=1)
        return n;
    else {
        if(F[n-2]==-1)
            F[n-2] = mfib(n-2);
        if(F[n-1]==-1)
            F[n-1] = mfib(n-1);
        F[n] = F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }
}

int main()
{
    for(int i=0;i<10;i++) 
        F[i]=-1;
    int n=7;
    int res = mfib(n);
    cout<<"Result is "<<res<<endl;
    return 0;
}