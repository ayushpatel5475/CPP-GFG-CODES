#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Point
{
    int x, y;
};
bool myCmp(Point p1, Point p2)
{
    return (p1.x < p2.x); // Sorting according to x values
                          //  for sorting by y values then :(p1.y < p2.y
                          // for decreasing order p1.x  > p2.x
}
int main()
{
    cout << "\n\nUsing Array:\n";
    int n;
    int arr[] = {10, 20, 5, 7};
    n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    for (int x : arr)
        cout << x << " ";
    // sort in decreasing ORDER
    sort(arr, arr + n, greater<int>());

    cout << endl;
    for (int x : arr)
        cout << x << " ";

    cout << "\n\nUsing Vectors:\n";

    vector<int> v = {5, 7, 20, 10};
    sort(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
        cout
            << x << " ";

    cout << "\n\nUsing User defined STRUCT:\n";
    Point arr2[] = {{30, 10}, {2, 8}, {5, 4}};
    sort(arr2, arr2 + n, myCmp);
    for (auto i : arr2)
        cout << i.x << " " << i.y << endl;
}