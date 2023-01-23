#include <iostream>
using namespace std;
double e(double x, double n) {
    static double s=1;
    double num =1, den = 1;
    for(int i=1;i<=n;i++) {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main()
{
    double x=1 , y=10;
    double res = e(x,y);
    cout<<"Result is "<<res<<endl;
    return 0;
}