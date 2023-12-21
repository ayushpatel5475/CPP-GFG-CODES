#include <iostream>
using namespace std;
//Diamond problem (NOT allowed iN JAVA)
//The SOLUTION is to use in C++ is use of virtua keyword 
class A{
    public:
    int x;

};

class B: virtual public A{};  //using Virutal to avoid cmopiler error
class C: virtual public A{};
class D: public B, public C{};

int main (){
    
    D d;
    cout<<d.x;  //compiler Error (ambiguous access) if NOT used virtual keyword
    return 0;

}