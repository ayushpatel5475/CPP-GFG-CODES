#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct point
{
    int x, y;
    point(int i, int j)
    {
        x = i;
        y = j;
    }
};

bool myCmp(point p1, point p2){return p1.x<p2.x;}

int main()
{
    vector<int> v = {10, 5, 30, 40, 90, 8};
    auto it1 = max_element(v.begin(), v.end());
    auto it2 = min_element(v.begin(), v.end());

    cout << (*it1) << " " << (*it2) << endl;
//in case of arrays: 
//arr: denotes address of 1st element
// and arr+6 denotes address beyond the last element+
    int arr[] = {5, 6, 20, 90, 4, 8};
    cout << *max_element(arr, arr + 6) << " ";  //arr+6 means: last element +1 ( index: 0 to 5) then extra 1 at the end of it.
    cout << *min_element(arr, arr + 6);

    cout << "\n";

    vector<point> v1 = {{5, 4}, {2, 300}, {90, 10}};
    auto it =max_element(v1.begin(), v1.end(), myCmp);
    cout<<((*it).x)<<" "<<((*it).y)<<endl;  // We can also use arrow operator as: (*it)->x
        it=min_element(v1.begin(), v1.end(), myCmp);
    cout<<((*it).x)<<" "<<((*it).y)<<endl;  
    return 0;
}