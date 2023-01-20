#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int a = 10;
    int arr[] = {10,33,45,6,70,87};
    int *p,*m;
    p=&a;
    cout<<*p<<" and " << a<<endl;
    printf("data is %d and %d",p,&a);
    m=arr;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    cout<<m[i]<<endl;

    return 0;
}