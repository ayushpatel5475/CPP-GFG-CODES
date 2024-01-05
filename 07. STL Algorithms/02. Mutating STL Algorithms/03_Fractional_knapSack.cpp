#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

bool myCmp(pair<int, int> a, pair<int, int> b)
{
    double r1 = static_cast<double>(a.first) / a.second;  //   (value/weight)
    double r2 = static_cast<double>(b.first) / b.second;

    return r1 > r2;
}

double fKnapS(int W, pair<int, int> arr[], int n)
{ // Pair: <int>--- Wieght, <int>--Value, W--capacity , n--total elements
    sort(arr, arr + n, myCmp);
    double res = 0.0;
    //W-current capaicty of kanpsack 
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second <= W)
        {
            res += arr[i].first;
            W -= arr[i].second;
        }
        else
        {
            res += arr[i].first * (static_cast<double>(W) / arr[i].second);
            break;
        }
    }

    return res;
}

int main()
{
    pair<int, int> arr[] = {{120, 30}, {100, 20}, {60, 10}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int W = 50;

    double result = fKnapS(W, arr, n);

    cout << "Maximum value in Knapsack: " << result << endl;

    return 0;
}
