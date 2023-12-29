#include <iostream>
#include <stack>

using namespace std;

/* 
//Naive Approach: O (n^2):

void prevGreater(int arr[], int n){
    for ( int i=0;i<n;i++){
        int j;
        for ( j=i-1; i>=0;j--){
            if ( arr[i]<arr[j]){
                cout<<arr[j]<<" ";
                break;
            }
            if ( j==-1)
                cout<< -1 <<" ";
        }
    }
}
*/
 
 // O(n) Solution: using Stack

 void prevGreater( int arr[], int n){
    stack <int> s;
    s.push(arr[0]); 
    cout<<"-1"<<" ";
    for ( int i=1;i<n;i++){
        while ( s.empty()==false && s.top() <=arr[i])
            s.pop();
        int pg= (s.empty ()) ? -1 : s.top();
        cout<< pg << " ";
        s.push(arr[i]);  
        
    }
 }

