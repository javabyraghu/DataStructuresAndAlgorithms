#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int len;
    int wid;
};
//call by value
void printA(struct Rectangle r1){
    r1.len=44;
    cout<<r1.len<<" "<<r1.wid<<endl;
}
//call by Addr
void printB(struct Rectangle &r1){
    r1.len=44;
    cout<<r1.len<<" "<<r1.wid<<endl;
}
//call by Addr using pointer
void printC(struct Rectangle *r1){
    r1->len=4444;
    cout<<r1->len<<" "<<r1->wid<<endl;
}

//return struct as pointer
struct Rectangle* getNew() {
    struct Rectangle *p;
    p=new Rectangle;
    //p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    p->len=987;
    p->wid=887;
}

int main()
{
    struct Rectangle r = {10,20};
    printA(r);
    cout<<r.len<<" "<<r.wid<<endl;
    printB(r);
    cout<<r.len<<" "<<r.wid<<endl;
    printC(&r); //pass address
    cout<<r.len<<" "<<r.wid<<endl;
    
    struct Rectangle *b = getNew();
    cout<<b->len<<" "<<b->wid<<endl;
    return 0;
}