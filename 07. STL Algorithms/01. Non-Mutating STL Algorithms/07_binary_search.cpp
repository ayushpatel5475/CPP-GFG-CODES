#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Point{
    int x,y;
    Point ( int i, int j){
        x=i,y=j;
    }
};
bool myCmp(Point p1, Point p2){return (p1.x<p2.x);}

int main()
{cout<<"using Vector:\n";
    vector<int> v = {10, 20, 30, 30, 40, 50};
    int x = 20;
    if (binary_search(v.begin(), v.end(), x) == true)
        cout << "Found!";
    else
        cout << "Not Found!";

    cout<<"\n\nusing Array:\n";

    int arr[]={10,20,30,30,40,50};
    int y=50;
    if ( binary_search(arr, arr+6,y)==true)
          cout << "Found!";
    else
        cout << "Not Found!";

cout<<"\n\nUsing user define STRUCT:\n";

vector <Point> v1={{10,50},{2,100},{50,90}};
sort(v1.begin(), v1.end(), myCmp);
Point p(2, 100);  //only x coordinate will be compared, so ( 2, 99) is also Found since only x value is compared.
if ( binary_search(v1.begin(), v1.end(), p, myCmp))
     cout << "Found!";
    else
        cout << "Not Found!";
    return 0;
}