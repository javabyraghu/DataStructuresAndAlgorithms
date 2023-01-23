#include <iostream>
using namespace std;

void show(int x) {
    if(x>0) {
        printf("%d ",x);
        show(x-1);
        printf(" %d",x);
    }
}

int main()
{
    int x=10;
    show(x);

    return 0;
}