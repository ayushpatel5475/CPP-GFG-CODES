#include <iostream>
using namespace std;
#include <vector>

/*
// function for Using Double pointers:

void print(int **arr, int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

int main()
{

    int **arr;
    int m = 3, n = 2;
    arr = new int *[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i;
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}
*/
/*
    void print(int *arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

// Using array of pointers
int main()
{
    int m = 3, n = 2;

    int *arr[m]; // Array of pointers

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i;
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}
*/

    // Using vector of vectors
    void print(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

int main()
{

    int m = 3, n = 2;
    vector<vector<int>> arr;

    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(i);
            arr.push_back(v);
        }
        print(arr);
    }

    return 0;
}
