#include <iostream>
using namespace std;

int count_distinct(int arr[], int n)
{
    int count = 0;
    bool isDistinct = true;

    for (int i = 0; i < n; i++)
    {
        isDistinct = true;

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = false;
                break; // break if element found again

            }
        }
        if (isDistinct == true)
            count++;
    }
    return count;
}

// main function
int main()
{
    cout << "ENTER THE VALUE OF n: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Number of distinct elements are : "<< count_distinct(arr, n);
}