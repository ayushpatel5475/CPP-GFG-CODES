#include <iostream>
#include <unordered_set>
using namespace std;

/*
//naive solution : O(n^2):
void printDistinct(int arr[], int n){
    for ( int i =0;i<n;i++){
        bool flag=false;

        for ( int j=0;j<i;j++){
            if ( arr[i]==arr[j]){
                flag=true;
                break;

            }
        }
    if ( flag==false)
        cout<<arr[i]<<" ";

    }
}
*/
// using unordered_set:

void printDistinct(int arr[], int n)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    for (int x : s)
        cout << x << " ";
}

//this functions prints all the distinct elements in the same order as they appear
void printDistinctInSameOrder(int arr[], int n)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
        if (s.find(arr[i]) == s.end())
        {
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
}

int main()
{
    int arr[] = {10, 8, 10, 10, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printDistinct(arr, n);

    cout << "\n";
    printDistinctInSameOrder(arr, n);

    return 0;
}