#include <iostream>
using namespace std;
// LCM ///here if you dont understand simply you can do HCF*LCM=a*b approach.

int max(int a, int b)
{
    if (a>b)
    return a ;
    else return b;
}

main()
{

    int i, a, b, n;
    cout << "ENTER Two numbers: ";
    cin >> a >> b;
    
int start=max(a,b);
int end =(a*b);

int ans=start;

for(int i =start;i<=end;i++)
{
    if(i%a==0 and i%b==0)
    {
        ans=i;
        break;
    }
   
} cout<<ans;
    return 0;
}