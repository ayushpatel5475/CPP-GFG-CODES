#include <iostream>
using namespace std;
//This is the case of DEEP constructors where Copy  create a memory location ,so here both values are 10 and 20
class Test{
    int *ptr;
    public:
    Test (int x)
    {
        ptr=new int(x);
    }
/*NOTE for DEEP Copy*/
Test(const Test &t){
    int val=*(t.ptr);
    ptr=new int (val);
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