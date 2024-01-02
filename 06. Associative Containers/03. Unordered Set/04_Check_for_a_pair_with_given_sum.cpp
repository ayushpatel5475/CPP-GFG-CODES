#include <iostream>
#include <unordered_set>

using namespace std;

/*
// naive solition (O(n^2)):

bool isPair(int arr[], int n, int sum)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
                return true;
        }
    }
    return false;
}
*/

//using Unordered set:
  bool isPair(int arr[], int n, int sum)
{
         unordered_set <int> s;

         for ( int i =0;i<n;i++){
            if ( s.find (sum=arr[i])==s.end())
                    return true;
            else    
                     s.insert (arr[i]);
         }
         return false;
    
}

int main(){

        int arr[]={3,2,8,15,-8};
        int n =sizeof (arr)/sizeof (arr[0]);
        int  sum=17;

    if (isPair(arr, n, sum)) {
        cout << "Pair with the given sum exists." << endl;
    } else {
        cout << "Pair with the given sum does not exist." << endl;
    }
}