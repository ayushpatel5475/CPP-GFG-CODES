#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
struct Pair{
    T x, y;
    Pair (T i, T j){x=i,y=j;}
    T getFirst(){return x;}
    T getSecond(){return y;}
};

int main(){
Pair <int> p1(10, 20),p2(50,100);
cout<< p1.getFirst()<<" "<<p1.getSecond()<<" "<<p2.getSecond();

return 0;

}