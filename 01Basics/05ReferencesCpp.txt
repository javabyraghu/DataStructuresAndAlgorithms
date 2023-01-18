
#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int &r=a;
    
    cout<<a<<endl<<r<<endl;
    
    r++;
    a++;
    cout<<a<<endl<<r<<endl;
    
    int b = 15;
    r = 15;
    
    cout<<a<<endl<<r<<endl<<b<<endl;

    return 0;
}