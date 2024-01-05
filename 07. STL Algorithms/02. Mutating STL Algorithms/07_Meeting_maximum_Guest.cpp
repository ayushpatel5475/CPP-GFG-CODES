#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int maxGuest(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 1, j = 0, res = 1, curr = 1;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}

#include <iostream>

int main()
{
    const int n = 4; // Replace with the actual size of your arrays
    int arr[] = {800,700,600,500}; // Replace with the actual arrival times
    int dep[] = {840,820,830,530}; // Replace with the actual departure times

    int result = maxGuest(arr, dep, n);

    std::cout << "Maximum number of guests at any time: " << result << std::endl;

    return 0;
}
