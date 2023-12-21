#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // for (int x:arr)   This is call by VALUE which do not show results in output
    // {
    //     x=x*2;
    // cout<< x<<" ";
    // }

    for (int &x : arr)  // Call by reference : use &
    {
        x = x * 2;
         cout<< x<<" ";
    }

    return 0;
}