#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int len;
    int wid;
};

int main()
{
    
    struct Rectangle r = {10,20};
    struct Rectangle *r2 = &r;
    r2->len=44;
    
    cout<<r.len<<" "<<r.wid<<endl;
    
    //using C
    struct Rectangle *r3 =(struct Rectangle *)malloc(sizeof(struct Rectangle));
    r3->len=55;
    r3->wid=66;
    
    cout<<r3->len<<" "<<r3->wid<<endl;
    //cout<<*r3.len<<" "<<*r3.wid<<endl; //invalid
    
    free(r3);
    
    //using CPP
    Rectangle *r4 = new Rectangle;
    r4->len=88;
    r4->wid=99;
    cout<<r4->len<<" "<<r4->wid<<endl;
    
    delete [] r4;
    
    return 0;
}