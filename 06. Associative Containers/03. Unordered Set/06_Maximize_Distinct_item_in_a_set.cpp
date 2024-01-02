#include <iostream>
#include <unordered_set>

using namespace std;

int maxDistinct(int arr[], int n, int k)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    int d = s.size();
    if (d >= (n / k))
        return (n / k);
    else
        return d;
}

int main()
{
    int a[] = {10, 15, 20, 25, 30, 50};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;

    int result = maxDistinct(a, n, k);
    cout << "Maximum distinct elements after removing at most " << k << " elements: " << result << endl;

    return 0;
}
