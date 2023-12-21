#include <iostream>
using namespace std;
// PRIME NUMBERs (NOT WORKING CODE)

main()
{
    int n, count = 0;
    cout << "ENTER NUMBER TO CHECK PRIME:  ";
cin>>n;
    if (n == 0 || n == 1)
    {
        cout << "Neither prime nor composite";
        return 0;
    }

    int i;
    for (i = 2; i <= n; i++)
    {
        while (n%i==0)
        {
            count++;
        }
        
        }
    
    if (count == 1)
        {
            cout << "PRIME"
                 << "\n";
        }
        else
        {
            cout << "NOT PRIME"
                 << "\n";
        }

    return 0;
}