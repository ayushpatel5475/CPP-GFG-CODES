

#include <iostream>
#include <algorithm>
using namespace std;
int minDiff(int arr[], int n, int m) {
    if (m > n) return -1;
    std::sort(arr, arr + n);
    int res = arr[m - 1] - arr[0];
    for (int i = 1; (i + m - 1) < n; i++) {
        res = std::min(res, arr[i + m - 1] - arr[i]);
    }
    return res; // Added return statement
}

int main() {
    const int n = 5; // Size of the array
    int arr[n] = {3, 4, 1, 9, 56};
    int m = 3; // Number of students

    int result = minDiff(arr, n, m);

    if (result != -1) {
        std::cout << "Minimum difference between chocolate packets: " << result << std::endl;
    } else {
        std::cout << "Invalid input: Number of students is greater than the number of chocolate packets." << std::endl;
    }

    return 0;
}
