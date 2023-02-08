#include<stdio.h>
#include <iostream>

using namespace std;

struct Array
{
  int A[10];
  int size;
  int length;
};
void Display (struct Array arr)
{
  int i;
  printf ("\nElements are\n");
  for (i = 0; i < arr.length; i++)
    printf ("%d ", arr.A[i]);
}
void swap(int *x,int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int LinearSearch(struct Array *arr, int element) {
    int i;
    for(i = 0; i<arr->length-1;i++) {
        if(element == arr->A[i]) {
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key) {
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h) {
        mid = (l+h)/2;
        if(key==arr.A[mid]) 
            return mid;
        else if(key<arr.A[mid])
            h = mid-1;
        else 
            l = mid+1;
    }
    return -1;
}


int main ()
{
  struct Array arr1 = { {2, 12, 14, 25, 36, 98, 108, 125}, 10, 8 };
  //cout<<"Index found at " << LinearSearch(&arr1,23)<<endl;
  cout<<"Index found at " << BinarySearch(arr1,108) <<endl;
  Display (arr1);
  return 0;

}
