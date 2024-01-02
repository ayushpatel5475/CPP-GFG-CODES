#include <iostream>
#include <map>
using namespace std;

/*

//Naive Solution 

void printGreater ( int arr[], int n){
    for ( int i =0;i<n;i++){
        int count =0;
        for (int j=0;j<n;j++){
            if ( j!=i&& arr[j]>arr[i])
                    count++;
        cout<<count<<" ";
        }
    }
}

//main function : 
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Count of elements greater than each element in the array:" << endl;
    printGreater(arr, n);

    return 0;
}

*/


// Effiecient solution : using map

void printGreater ( int arr[],int n){
    map <int, int > m;
    for ( int i =0;i<n;i++)
        m[arr[i]]++;
    int cum_freq=0;  //cummulative frequency

    for ( auto it=m.rbegin();it!=m.rend();it++)
    {
        int freq=it->second;
        it->second=cum_freq;
        cum_freq+=freq;
    }
    
    // Print the counts of elements greater than each element in the array
    for (int i = 0; i < n; i++)
    {
        cout << m[arr[i]] << " ";
    }
    cout << endl;
    
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Count of elements greater than each element in the array:" << endl;
    printGreater(arr, n);

    return 0;
}