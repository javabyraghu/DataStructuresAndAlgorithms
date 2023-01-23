#include <iostream>
using namespace std;
//O(n)
int sum(int n) {
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}
//O(n)
int sumLoop(int n) {
    int sum = 0;
    for(int i=1;i<=n;i++) {
        sum+=i;
    }
    return sum;
}
//O(1)
int sumMaths(int n) {
    return n*(n+1)/2;
}

int main()
{
    int x=20;
    //int res = sum(x);
    //int res = sumLoop(x);
    int res = sumMaths(x);
    cout<<"Result is "<<res<<endl;
    return 0;
}