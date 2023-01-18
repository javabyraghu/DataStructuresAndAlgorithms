#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rect {
    int len;
    int wid;
};
int main()
{
    int *p1;
    char *c;
    float *f;
    double *d;
    struct Rect *r1;
    
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(r1)<<endl;
    
    
    //int *p = (int *)malloc(5*sizeof(int)); //C 
    int *p =  new int[5]; //CPP
    p[0]=10;
    p[1]=23;
    p[2]=34;
    p[3]=76;
    p[4]=65;
    
    for(int i=0;i<5;i++) {
        cout<<p[i]<<endl;
    }
    
    //free(p); //C
    delete [ ] p; //CPP
    
    return 0;
}