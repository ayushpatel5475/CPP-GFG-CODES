#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
/*
// Naive solution :O((n-k)*k*k) :

void printDistWind(int arr[], int n, int k){
    for ( int i=0;i<n-k;i++){
        int count=0;
        for ( int j=0;j<k;j++)
            {
                bool flag=false;
                for ( int p=0;p<j;p++)
                    if ( arr[i+j]==arr[i+p])
                        {flag = true; break;}
            if ( flag==false)
                count++;
            }
            cout<<count<<" ";
    }
}
*/
// Using unodered map ( O(n)):

void printDistWind(int arr[], int n, int k)
{

    unordered_map<int, int> freq;
    for (int i = 0; i < k; i++)
        freq[arr[i]]++;
    cout << freq.size() << " ";

    for (int i = k; i < n; i++)
    {
        freq[arr[i - k]]--;
        if (freq[arr[i - k]]==0)
            freq.erase(arr[i - k]);
        freq[arr[i]]++;
        cout << freq.size() << " ";
    }
}

int main()
{
    int arr[] = {10,20,20,10,30,40,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    cout << "Distinct elements in each window of size " << k << " are: ";
    printDistWind(arr, n, k);

    return 0;
}