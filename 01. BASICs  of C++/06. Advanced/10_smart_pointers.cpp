#include <bits/stdc++.h>
using namespace std;
class SP{

Test *ptr;
public: 
    SP(Test *p=NULL){ptr=p;}
    ~SP(){delete ptr;}
    Test &operator*(){return *ptr;}
    Test &operator->(){return *ptr;}




};
int main(){
 
 cout<<"main begin\n";
 {
    SP sp(new Test(10, 20));
 }
 cout<<"Main ends\n";
 return 0;   
}