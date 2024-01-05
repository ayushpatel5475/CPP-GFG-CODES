#include <vector>
#include <iostream>
#include <algorithm>
#include <functional> // Include functional for greater<int>
using namespace std;

void merge(int a[], int b[], int m, int n) {
    for (int i = 0; i < m; i++) {
        if (a[i] > b[0]) {
            pop_heap(b, b + n, greater<int>());
            swap(a[i], b[n - 1]);
            push_heap(b, b + n, greater<int>());
        }
    }
    sort_heap(b, b + n);
}

int main() {
    const int m = 3;
    const int n = 3;
    
    int a[m] = {3,20,40};
    int b[n] = {2,10,12};

    cout << "Array A before merging: ";
    for (int i = 0; i < m; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Array B before merging: ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;

    merge(a, b, m, n);

    cout << "Merged array: ";
    for (int i = 0; i < m; i++)
        cout << a[i] << " ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;

    return 0;
}
