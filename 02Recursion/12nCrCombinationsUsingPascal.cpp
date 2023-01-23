#include <iostream>

using namespace std;

int fact(int n) {
    if(n==1)
        return 1;
    return fact(n-1)*n;
}
int nCr(int n,int r) {
    int num, den;
    
    num = fact(n);
    den = fact(r) * fact(n-r);
    
    return num/den;
}
//Pascal Triangle 
int nCrPascal(int n, int r) {
    if(r==0 || n==r) {
        return 1;
    }
    else {
        return nCrPascal(n-1,r-1) + nCrPascal(n-1,r);
    }
}

int main()
{
    int res = nCrPascal(5,2);
    cout<<"Result is " << res<<endl;

    return 0;
}