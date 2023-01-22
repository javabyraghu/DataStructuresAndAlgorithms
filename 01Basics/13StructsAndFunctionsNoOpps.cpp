#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int len;
    int wid;
};
//call by Addr
void initRect(struct Rectangle *r1,int l,int w){
    r1->len=l;
    r1->wid=w;
    cout<<r1->len<<" "<<r1->wid<<endl;
}
//call by val
int calArea(struct Rectangle r){
    return r.len * r .wid;
}
//call by Addr
void changeLen(struct Rectangle *r1,int l){
    r1->len=l;
    cout<<r1->len<<" "<<r1->wid<<endl;
}
int main()
{
    struct Rectangle r1;
    initRect(&r1,10,20);
    calArea(r1);
    changeLen(&r1,44);
    cout<<"DONE";
    return 0;
}