#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    // Another way of creating vector
    cout << "\n";

    vector<int> v2{0, 5, 30};
    for (int x : v2)
    {
        cout << x << " ";
    }

    // another way: to assign same value to every index
    cout << "\n";
    int a = 4, m = 5;
    vector<int> v4(a, m);
    for (auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << (*it) << " ";
    }

    // creating vector from the array
    cout << "\n";
    // rbegin(): reverse begin
    // rend(): reverse end

    int arr[] = {90, 81, 57, 21, 61};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v5(arr, arr + n);
    for (auto it2 = v5.rbegin(); it2 != v5.rend(); it2++)
    {
        cout << (*it2) << " ";
    }

    // another method:
    cout << "\n";
    vector<int> v3{50, -56, 30};
    for (auto x1 : v3)
    {
        cout << x1 << " ";
    }

    return 0;
}