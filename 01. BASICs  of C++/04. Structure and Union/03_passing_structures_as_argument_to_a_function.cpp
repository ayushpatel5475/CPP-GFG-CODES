#include <iostream>
using namespace std;
struct Point{
    int x;
    int y;

    };


void print(Point p)
{
    cout<<p.x<<" "<<p.y<<endl;
}
int main()
{
    Point p={10,20};
   print(p);

    return 0;
}