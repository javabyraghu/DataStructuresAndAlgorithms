#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    //array syntaxes
    int arr1[10] ; //10 garbage values
    int arr2[5] = {10,20,30,40,50} ; //initial values
    int arr3[6] = {10,20};//other values are set to zeros
    int arr4[] = {10,33,44,55,66}; //size is 5
    for(int i=0;i<5;i++) {
        //cout<<arr4[i]<<" ";
        //printf("%d ",arr4[i]);
        //printf("%d ",i[arr4]); //syntax-2
        printf("%d ",*(arr4+i)); //syntax-3 arrays are pointers internally
        printf("%u ",(arr4+i)); //prints address or use &arr[i]
    }
    printf("%d ",sizeof(int));//size of int datatype (4) [in CPP]

    return 0;
}