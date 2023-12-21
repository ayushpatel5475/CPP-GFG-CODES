#include <iostream>
using namespace std;
// FACTORIAL of a given number by user
main()
{

    int i, n, sum = 1;
    cout << "ENTER THE NUMBER : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    cout << sum;
    return 0;
}