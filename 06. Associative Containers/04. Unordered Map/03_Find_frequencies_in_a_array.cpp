#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

//Time complexity: O(1) overall : O(n)

int printFreq(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    for (auto x : m)
        cout << x.first << " " << x.second << "\n";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Frequency of elements in the array:\n";
    printFreq(arr, n);

    return 0;
}