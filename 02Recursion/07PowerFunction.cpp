#include <iostream>
using namespace std;
int power(int m, int n) {
    if(n==0)
        return 1;
    else 
        return power(m,n-1)*m; 
}
// 2pow9 = 2*(2*2)pow4 => consider mpown=> m*powFun(m*m,(n-1)/2)
//2pow8 = (2*2)pow4 => powFun(m*m,n/2)
int powerFaster(int m, int n) {
   if(n==0)
        return 1;
   else if(n%2==0)
        return powerFaster(m*m,n/2);
    else
        return m*powerFaster(m*m,(n-1)/2);
}

int main()
{
    int x=2 , y=9;
    //int res = power(x,y);
    int res = powerFaster(x,y);
    cout<<"Result is "<<res<<endl;
    return 0;
}