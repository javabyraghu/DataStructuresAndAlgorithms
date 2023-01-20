#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle {
    int width;
    int breadth;
    char c1;
}r2,r3;

struct Rectangle r4;
int main()
{
    struct Rectangle r1 = {10,20};
    //printf("Size is %d", sizeof(r1));
    printf("Size is %lu and data is %d and %d\n",
        sizeof(r1),r1.width,r1.breadth);
    cout<<"Data is "<<r1.width<<" "<<r1.breadth<<endl;
    cout<<sizeof(r2)<<","<<sizeof(r4)<<endl;
    return 0;
}
