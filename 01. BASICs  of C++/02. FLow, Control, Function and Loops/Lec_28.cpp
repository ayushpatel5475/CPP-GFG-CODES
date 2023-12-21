#include <iostream>
using namespace std;
// Couting no. of digits in a number    1528   --> 4 digits
main()
{

int i,n,count=0;
cout<<"ENTER NUMBER: ";
cin>>n;

while(n>0)
{
  n=n/10;
  count++;
    
  }
  cout<<count;
    return 0;
}