#include <iostream>
using namespace std;

void f1()throw(int){
    cout<<"f1 begins \n";
    throw 100;
    cout<<"f1 ends \n";  // this will not print due to execption and it do not have excpetion handler hence pass on to f2
}
void f2()throw(int){
    cout<<"f2 begins \n";
    f1();
    cout<<"f2 ends \n";  // This will not print since f2 do not have exception handler so pass on to main
}

int main(){
    try{
        f2();
    }
    catch(int i)
    {cout<<"caught Exception \n";}  //here it is excpetion handler so it will execute finally
cout<<"bye bye";
return 0;
}