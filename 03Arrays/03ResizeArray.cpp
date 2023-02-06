#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int *p,*q;
    p =(int *)malloc(5*sizeof(int));
    p[0]=10, p[1]=20,  p[2]=30, p[3]=10, p[4]=90;
    for(int i=0;i<5;i++) {
        cout<<p[i]<<" ";
    }
    q = (int *)malloc(10*sizeof(int));
    for(int i=0;i<5;i++) {
        q[i] = p[i];
    }
    free(p); // remove p data from heap
    p =  q ; //link p to q array
    q = NULL; //un refer q pointer
    cout<<endl;
    for(int i=0;i<10;i++) {
        cout<<p[i]<<" ";
    }
    return 0;
}