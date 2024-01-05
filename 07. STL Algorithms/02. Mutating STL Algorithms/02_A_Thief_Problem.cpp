// A Thief Problem:
#include <iostream>
#include <algorithm>

using namespace std;
int getMaxVal(int arr[], int n, int k)
{
    sort(arr, arr + n, greater<int>());
    int res = 0;
    for (int i = 0; i < k; i++)
        res = res + arr[i];
    return res;
}

int main()
{
    int arr[] = {30, 20, 10, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = getMaxVal(arr, n, k);

    std::cout << "Maximum value: " << result << std::endl;

    return 0;
}
