#include <iostream>
using namespace std;


class Complex{
    private: 
        int real ;
        int img;
    public:
        void print(){
            cout<<real<<" + ("<<img<<")i"<<endl;
        }
        Complex(int r, int i){
            real =r;
            img=i;
        }

};

int main(){
Complex c1(10,15);
c1.print();
    
    
    
    
    
    
    return 0;

}