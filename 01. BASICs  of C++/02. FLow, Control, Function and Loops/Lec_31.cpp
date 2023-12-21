#include <iostream>
using namespace std;
// HCF or GCD

int MIN(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}
main()
{

    int i, a, b, n,ans;
    cout << "ENTER Two numbers: ";
    cin >> a >> b;
    MIN(a, b);

    for (i = 1; i < MIN(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {

            ans=i;
            cout<<"HCF is:  "<<ans<<"\n";
        }
    }
    cout<<"LCM is: "<<(a*b)/ans; 
    return 0;
}