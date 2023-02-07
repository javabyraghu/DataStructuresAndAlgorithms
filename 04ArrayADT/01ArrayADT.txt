#include <iostream>
#include <stdio.h>

using namespace std;

struct Array {
    int A[20];
    int length;
    int size;
};

void Display(struct Array arr) {
    int i;
    cout<<"Elements in Array are: " << endl;
    for(i=0;i<arr.length;i++) {
        printf("%d ",arr.A[i]);
    }
}

void Append(struct Array *arr, int element) {
    if(arr->length < arr->size) {
        arr->A[arr->length++] = element;
    }
}

int Delete(struct Array *arr, int index) {
    int i,element;
    element = arr->A[index];
    if(index>=0 && index<arr->length) {
        for(i=index;i<arr->length-1;i++) {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
    return element;
}

void Insert(struct Array *arr, int index, int element) {
    int i;
    if(index>=0 && index<=arr->length) {
        for(i=arr->length;i>index;i--) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = element;
        arr->length++;
    }
}

int main()
{
    struct Array arr ={{10,22,43,56,70},5,20};
    Append(&arr,90);
    Append(&arr,100);
    Insert(&arr,1,999);
    printf("Deleted: %d \n",Delete(&arr,3));
    Display(arr);

    return 0;
}
