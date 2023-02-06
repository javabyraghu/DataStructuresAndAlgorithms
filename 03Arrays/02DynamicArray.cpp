#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[5] = {10,2,3,4,5};//static array created in stack
    int *b;
    b = (int *)malloc(5*sizeof(int));
    //b = new int[5]; //in cpp;
    
    b[0]=11, b[1]=43, b[2]=65, b[3]=99;
    cout<<sizeof(b);
    for(int i=0;i<5;i++) {
        cout<<b[i]<<" ";
    }
    
    
    //free(b); //in c
    delete [] b; //in c++
    return 0;
}