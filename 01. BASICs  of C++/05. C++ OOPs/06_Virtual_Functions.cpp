#include <iostream>
using namespace std;
//Vritual Functions

class Base{
    public:
    virtual void print() //use of Virtual
    {
        cout<<"Base \n";
    }
    
}; 
class Derived: public Base{ 
    public: 
         void print() override {cout<<"Derived \n";}  // override function is used to maintain READABILITY
};


int main(){
    Base b;
    Derived d;
    b.print();
    d.print();

    Base *ptr=&d;
    ptr->print();     //it should print Derived BUT it prints Base , because Type of pointer is Base type, 
    // AFTER using viritual in BASE class it is behaving correctly

    return 0;

}