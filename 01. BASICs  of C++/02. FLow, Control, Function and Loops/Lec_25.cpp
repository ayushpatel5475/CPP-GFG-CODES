#include <iostream>
using namespace std;
// NESTED LOOPs Concept
main()
{

    // Not multiple of x

    int n, x, i;
    cout << "ENTER NUMBER n: ";
    cin >> n;
    cout << "ENTER number which you don't want multiple x: ";
    cin >> x;

    for (i = 1; i <= n; i++)
    {
        if (i % x == 0)
            continue; // this line will not let run down print statement and loop will run again

        cout << i << "\n";
    }

    return 0;
}