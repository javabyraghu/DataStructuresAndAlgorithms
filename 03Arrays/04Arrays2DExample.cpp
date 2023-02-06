#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[3][3] = {{1,2,3},{3,4,5},{6,7,8}};
    int *B[3];
    int **C;
    int i,j;
    
    B[0]=(int *)malloc(3*sizeof(int));
    B[1]=(int *)malloc(3*sizeof(int));
    B[2]=(int *)malloc(3*sizeof(int));
    
    C = (int **) malloc(3*sizeof(int *));
    C[0]=(int *)malloc(3*sizeof(int));
    C[1]=(int *)malloc(3*sizeof(int));
    C[2]=(int *)malloc(3*sizeof(int));
    
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            cout<<C[i][j]<<" ";
    }
    return 0;
}