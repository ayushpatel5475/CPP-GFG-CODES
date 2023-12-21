#include <iostream>
using namespace std;
struct point{
    int x;
    int y;

    };

int main()
{
    point p={10,20};
    point *ptr=&p;
    cout<<ptr->x<<" : this has been printed by using pointer \n";

    ptr->x=30; //updaing value of x using pointer

    cout<<p.x<<" : Updated value using pointer";


    return 0;
}