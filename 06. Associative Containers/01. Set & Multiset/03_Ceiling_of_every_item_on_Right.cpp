#include <iostream>
#include <set>
#include <limits.h>
#include <climits>

using namespace std;
/*
//naive solution : O(n^2)
#include <iostream>


void printCeiling(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int diff = INT_MAX;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                diff = min(diff, arr[j] - arr[i]);
            }
        }

        if (diff == INT_MAX) {
            cout << -1 << " ";
        } else {
            cout << (arr[i] + diff) << " ";
        }
    }
}

int main() {
    // Example usage:
    int arr[] = {4, 6, 3, 8, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printCeiling(arr, n);

    return 0;
}
*/

   
//Efficient Solution 
void printCeilingRight(int arr[], int n ){
set <int> s;
int res[n];

for ( int i =n-1;i>=0;i--)
{
    auto it =s.lower_bound(arr[i]);
    if ( it == s.end())
        res[i]= -1;
    s.insert ( arr[i]);

}
for ( int i =0;i<n;i++)
    cout<<res[i]<<" ";
    

}