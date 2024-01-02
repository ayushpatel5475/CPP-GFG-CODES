#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
/*
//Naive Solution ( not working ) :O(n^2)
bool isSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == 0)
                return true;
        }
        return false;
    }
}
*/
// Efficient (HASING): O(n):
bool isSum(int arr[], int n)
{
    unordered_set<int> s;
    int pre_sum=0;
    for ( int i=0;i<n;i++){
        pre_sum=pre_sum+arr[i];
        if ( s.find(pre_sum)!=s.end())
            return true;
        if ( pre_sum==0)
            return true;
        s.insert(pre_sum);
    }
    return false;
}

int main() {
    // Example usage
    int arr1[] = {4, 2, -3, 1, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Array 1: " << (isSum(arr1, n1) ? "True" : "False") << std::endl;

    int arr2[] = {4, 2, 1, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "Array 2: " << (isSum(arr2, n2) ? "True" : "False") << std::endl;

    // Add more test cases as needed

    return 0;
}