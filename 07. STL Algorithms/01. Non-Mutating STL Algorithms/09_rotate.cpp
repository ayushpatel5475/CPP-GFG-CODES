#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{

    vector<int> v = {10, 20, 30, 40, 50, 60};
    rotate(v.begin(), v.begin() + 2, v.end());
    for (int x : v)
        cout << x << ", ";

    cout << "\n\nusing array:\n";

    int arr[] = {10, 20, 30, 40, 20, 60};
    rotate(arr, arr + 2, arr + 6);

    for (int x : arr)
        cout << x << " ";

    return 0;
}