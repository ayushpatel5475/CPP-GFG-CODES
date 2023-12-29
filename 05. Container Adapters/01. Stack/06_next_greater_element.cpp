#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

/* // Naive Solution : O(n^2)

void nextGreater ( int arr[], int n){

     for ( int i=0;i<n;i++){
        int j;
        for ( j=i+1;j<n;j++){  // if j==n means element not found
            if (arr[j]>arr[i]){
                cout<< arr[j]<<" ";
                break;
            }
        }
        if ( j==n)
            cout<<-1<<" ";
     }
}
*/

// Efficient Solution : using stack O(n):
// same as previous greater starting from Right side
// this will print the Output in REVERSE ORder

vector<int> nextGreater(int arr[], int n)
{
    vector<int> v;
    stack<int> s;
    s.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
            s.pop();
        int nextGr = (s.empty()) ? (-1) : (s.top());
        // cout<< nextGr <<" ";
        v.push_back(nextGr);
        s.push(arr[i]);
    }

    reverse(v.begin(), v.end());
    return v;
}
