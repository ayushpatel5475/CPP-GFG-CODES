#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// method 1  ( Sorting):O(n(logn)):
/*
int findLongest(int arr[], int n)
{
    sort(arr, arr + n);
    int res = 1, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
            curr++;
        else
        {
            res = max(res, curr);
            curr = 1;
        }
    }
    res = max(res, curr); //when all the elements are consecutive
    return res;
}
 */
// method 2 ( Using hash table : unordered set): O(n):
int findLongest(int arr[], int n)
{
    int res = 0;
    unordered_set<int> h;
    for (int i = 0; i < n; i++)
        h.insert(arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (h.find(arr[i] - 1) != h.end())
        {
            int curr = 1;
            while (h.find(arr[i] + curr) != h.end())
                curr++;
            res = max(res, curr);
        }
    }
    return res;
}
int main()
{
    int a[] = {10, 11, 12, 15,16,17,18, 30, 50};
    int n = sizeof(a) / sizeof(a[0]);

    int result = findLongest(a, n);
    cout << "Length of the longest consecutive subsequence: " << result << endl;
    
    return 0;
}