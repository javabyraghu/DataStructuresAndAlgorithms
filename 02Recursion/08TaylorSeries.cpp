#include <iostream>
using namespace std;
double e(int x, int n) {
    static double p = 1, f = 1;
    double res = 1;
    if(n==0)
        return 1;
    else {
        res = e(x,n-1);
        p = p*x;
        f = f*n; 
        return res + (p/f);
    }
}

int main()
{
    int x=1 , y=9;
    double res = e(x,y);
    cout<<"Result is "<<res<<endl;
    return 0;
}