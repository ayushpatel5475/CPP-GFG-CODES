#include <iostream>
using namespace std;

struct complx{
    int real, img;
};
int main(){
complx n1, n2, n3;
cout<<"Enter real and imaginary part of number 1 : ";
cin>>n1.real>>n1.img;

cout<<"Enter real and imaginary part of number 2 : ";
cin>>n2.real>>n2.img;

n3.real=n1.real+n2.real;
n3.img=n1.img+n2.img;

cout<<n3.real<<" + "<<n3.img<<"i";
    return 0;
}