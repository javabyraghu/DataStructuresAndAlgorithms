#include <iostream>
using namespace std;
//Tree Recursion
void display(int n) {
    if(n>0) {
       printf("%d ",n);
       display(n-1);
       display(n-1);
    }
}

int main()
{
    int x=4;
    display(x);
    
    return 0;
}