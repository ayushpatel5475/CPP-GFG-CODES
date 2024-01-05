#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    reverse(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";

    cout << "\n\n";

    vector<int> v2 = {10, 20, 30, 40, 50};
    reverse(v2.begin() + 1, v2.end()); // note that reversing from 2nd element to last

    for (int x : v2)
        cout << x << " ";

    cout << "\n\nUsing Array: \n";
    int arr[] = {10, 20, 30, 40, 50};
    reverse(arr, arr + 5);
    for (int x : arr)
        cout << x << " ";

    cout << "\n\nUsing String  : \n";
    string s = "geeks";
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}