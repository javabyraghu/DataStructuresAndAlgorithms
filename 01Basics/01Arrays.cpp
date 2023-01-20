//onelineGDB
#include <iostream>

using namespace std;

int main()
{
    //int b[]={10,20,30};
    //int c[5]={10,11};
    //b[0]=13;
    int n;
    cout<<"Enter number";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cout<<"Enter data for "<<i<<endl;
        cin>>a[i];
    }
    for(int temp:a) {
        cout<<temp<<endl;
    }

    return 0;
}
