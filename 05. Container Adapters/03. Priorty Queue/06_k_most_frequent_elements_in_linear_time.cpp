#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;
/*
void printkFrequent(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for (int x : arr)
        m[x]++;
    vector<int> freq[n + 1];
    for (auto x : m)
        freq[x.second].push_back(x.first);

    int count = 0;
    for (int i = n; i >= 0; i--)
    {
        for (int x : freq[i])
        {
            cout << x << " ";
            count++;
            if (count == k)
                return;
        }
    }
}

int main()
{
    int arr[] = {4, 5, 6, 7, 4, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Replace with the desired value of k
    printkFrequent(arr, n, k);
    return 0;
}
*/