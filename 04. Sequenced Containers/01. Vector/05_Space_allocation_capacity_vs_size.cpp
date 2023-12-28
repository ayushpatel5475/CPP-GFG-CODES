#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(10);  //capacity=1
    v.push_back(20);//capacity=2
    v.push_back(30);//capacity=4
     v.push_back(100);//capacity=4
     v.push_back(500);//capacity=8
    cout<<v.size()<<" "<<v.capacity()<<" ";


return 0;
}