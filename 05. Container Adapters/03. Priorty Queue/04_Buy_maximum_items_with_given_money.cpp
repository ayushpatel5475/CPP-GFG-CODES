#include <iostream>
#include <queue>
using namespace std;

int purchaseMax(int arr[], int n, int sum)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);

    int res = 0;

    while (sum >= 0 && pq.empty() == false && pq.top() <= sum)
    {
        sum = sum - pq.top();
        pq.pop();
        res++;
    }
    return res;
}

int main()
{
    // Example usage
    int arr[] = {1, 12, 5, 111, 200};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;

    // Call the function to find the maximum items that can be purchased
    int maxItems = purchaseMax(arr, n, sum);

    // Output the result
    cout << "Maximum items that can be purchased: " << maxItems << endl;

    return 0;
}