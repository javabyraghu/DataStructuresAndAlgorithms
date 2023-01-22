#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void print(int *a,int n) {
    a[0]=990;
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//dynamically creating array & link to a pointer
int* getArr(int n) {
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return p;
}

int main()
{
    int arr[]= {10,55,32,67,88,12};
    print(arr,6);
    cout<<arr[0]<<" is modified by print"<<endl;
    
    int *newArr = getArr(5);
    print(newArr,5);
    return 0;
}