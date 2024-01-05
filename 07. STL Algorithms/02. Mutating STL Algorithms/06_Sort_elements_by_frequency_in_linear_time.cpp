#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

void sortByFreq(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    vector<int> freq[n + 1];
    for (int i = 0; i < n; i++)
    {
        int f = m[arr[i]];
        if (f != -1)
        {
            freq[f].push_back(arr[i]);
            m[arr[i]] = -1;
        }
    }

    int index = 0;
    for (int i = n; i > 0; i--)
        for (int x : freq[i])
            for (int j = 0; j < i; j++)
                arr[index++] = x;
}

int main()
{
    int arr[] = {5,2, 2, 8, 5, 6, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    sortByFreq(arr, n);

    cout << "Sorted array by frequency: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
