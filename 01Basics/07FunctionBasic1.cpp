#include <stdio.h>
#include <iostream>

using namespace std;

int add(int a, int b) {
    int c = a+b;
    return c;
}


int main()
{
    
    int m = 10, n = 20, sum ;
    
    sum = add(m,n);
    
    cout<<"Sum is "<<sum<<endl;
    
    return 0;
}