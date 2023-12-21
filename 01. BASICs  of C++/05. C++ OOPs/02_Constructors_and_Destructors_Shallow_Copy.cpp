#include <iostream>
using namespace std;
//This is the case of Shallow constructors where Copy do not create a memory location just copy shallowly, so here both values are 20 and 20
class Test{
    int *ptr;
    public:
    Test (int x)
    {
        ptr=new int(x);
    }
    void set (int x){
        *ptr=x;
    }
    void print()
    {
        cout<<*ptr<<" ";
    }
};

int main(){
Test t1(10);
Test t2(t1);
t2.set(20);
t1.print();
t2.print();

return 0;
}