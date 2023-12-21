#include <iostream>
using namespace std;
int main()
{
 
    int a[]={10,20,30};
    int n=sizeof(a)/sizeof(a[0]);
for (int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    
    cout<<"\n";

//alternate Method
for (int x: a){
cout<<x<<" ";
}

    return 0;
}
