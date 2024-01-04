#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <numeric>
using namespace std;
int myfun(int x, int y)
{
    return x * y;
}

int main()
{

    vector<int> v = {10, 20, 30};
    // initial value +sum
    int init_res = 5;
    cout << accumulate(v.begin(), v.end(), init_res);
    // negative: ( Initial value - sum):
    cout << "\n\n";

    vector<int> v2 = {10, 20, 30};
    int init_res1 = 100;
    cout << accumulate(v2.begin(), v2.end(), init_res1, minus<int>());

    cout << "\n\nusing array :\n";

    int init_res2 = 5;
    int arr[] = {10, 20, 30};
   cout<< accumulate(arr, arr + 3, init_res2, myfun);

    return 0;
}
