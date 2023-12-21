#include <iostream>
using namespace std;
// All divisor of a number 12    --> 1 2 3 4 6 12
main()
{

    int i, n;
    cout << "ENTER THE NUMBER";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "\n";
        }
    }
    return 0;
}