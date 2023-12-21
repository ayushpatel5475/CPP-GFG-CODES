#include <iostream>
using namespace std;
//Multiple Inheritance

class A{};
class B{};

class C: public A, public B{};

int main(){
    C obj;
    return 0;
}
   