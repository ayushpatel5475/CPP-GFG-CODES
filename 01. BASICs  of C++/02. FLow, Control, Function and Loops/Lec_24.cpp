#include <iostream>
using namespace std;
// BREAK
main()
{
    // Smallest divisor of N (greater than 1)
    int i,n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    for (i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"smalles divisor is: "<<i<<"\n";
           
            break;   //if N=49...and break not used then 7 will come as well as 49 ....but only 7 is answer
        }
    }


    return 0;

}