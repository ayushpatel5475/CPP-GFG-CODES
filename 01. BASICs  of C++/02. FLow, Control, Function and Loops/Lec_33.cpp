#include <iostream>
using namespace std;
// Fibonnacii series:0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 .....
main()
{
    int n;
    cout<<"How many terms you want?  :";
    cin>>n;

    int a=1,b=1,c=0;
    cout<<c<<" "<<a<<" "<<b<<" ";

    for(int i =2;i<n;i++)
    {
        c=a+b;          //a b c 
    cout<<c<<" ";
    a=b;
    b=c;

    }


    return 0;
}