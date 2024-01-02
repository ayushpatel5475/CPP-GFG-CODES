#include <iostream>
#include <unordered_set>

using namespace std;
/*
//naive solution : O(n^2):

void printRepeating(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << arr[i] << " ";
    }
}
*/

//using unordered_Set: O(n):

void printRepeating(int arr[], int n)
{   unordered_set <int> s;
     for ( int i=0;i<n;i++)
     {
        if ( s.find(arr[i])==s.end())
            s.insert(arr[i]);
        else    
            cout<<arr[i]<<" ";
     }



}
int main()
{

    int arr[] = {10, 8, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printRepeating(arr, n);

    return 0;
}