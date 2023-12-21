#include <iostream>
using namespace std;

class Point{
private: int x, y;
public: 
    Point(){
        x=0;
        y=0;
            }
    Point(int x1, int y1){
        x=x1;
        y=y1;

    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }

};


int main(){
    Point p1, p2(10, 20); //Static
    p1.print();  //static accessing
    p2.print();

    Point *ptr=new Point(5, 10); //Dynamically allocating constructor
    ptr->print(); //Accessing same print function since dyanmically allocated

return 0;
}