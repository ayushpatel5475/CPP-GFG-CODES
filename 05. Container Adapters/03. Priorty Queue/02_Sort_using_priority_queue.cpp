#include <iostream>
#include <queue>
using namespace std;

//using MAX heap
void mySort(int arr[], int n) {
    priority_queue<int> pq(arr, arr + n);

    for (int i = n - 1; i >= 0; i--) {
        arr[i] = pq.top();
        pq.pop(); 
    }
}

//using MIN heap
void mySortMin(int arr[], int n) {
    priority_queue<int, vector <int>, greater<int>> pq(arr, arr + n);

    for (int i = 0; i <n; i++) {
        arr[i] = pq.top();
        pq.pop(); 
    }
}

int main() {
    int arr[] = {12, 5, 8};
    int arr2[]={10,130,50,400};
    mySort(arr, 3);
    mySortMin(arr2, 4);

    // Print the sorted array (using MAX heap)
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
cout<<"\n";
// Print the sorted array (using MIN heap)
    for (int i = 0; i < 4; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
