#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 5};
    vector<int> v2 = {20, 10, 5, 30};

    if (is_permutation(v1.begin(), v1.end(), v2.begin())) // Corrected the third argument
        cout << "Yes\n";
    else
        cout << "No\n";

    // Using Arrays:

    int a1[] = {30, 20, 10};
    int a2[] = {20, 10, 30};

    if ( is_permutation ( a1, a1+3 , a2))
        cout<<"Yes\n";
    else    cout<<"No\n";


    return 0;
}
