#include <iostream>
using namespace std;
class Test{
    public: 
    Test(){cout<<"Constructor is called."<<endl;}
    ~Test(){cout<<"Destructor is called."<<endl;}
};

int main(){
{
Test t1;// constructor is called
Test t2 ;// constructor is called
 }   //here at the end destructor is called automatically

//Important to NOTE that Destruction happens in reverse order as they are called.

Test t3;  // constructor is called



 return 0;
} //here at the end destructor is called automatically
