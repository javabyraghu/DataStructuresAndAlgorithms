#include <iostream>
using namespace std;
double e(double x, double n) {
    static double s=1;
    if(n==0)
        return s;
    s = 1 + (x/n) * s;
    return e(x,n-1); 
}

int main()
{
    double x=2 , y=10;
    double res = e(x,y);
    cout<<"Result is "<<res<<endl;
    return 0;
}