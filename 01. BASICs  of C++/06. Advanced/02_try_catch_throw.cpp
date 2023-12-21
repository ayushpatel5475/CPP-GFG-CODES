#include <iostream>
using namespace std;

int main(){

double x, y;
cin>>x>>y;

try {
    if(x==0.0)
    throw 0;
    if(y==0.0)
    throw string ("Y is  zero");
    if (x+y<0.0)
    throw (x+y);
}
catch (int e1){cout<<e1;}  // x=0
catch(string &e2)  //y=0
{cout<<e2;}
catch (...){cout << "x+y is less than 0";}  // x=-1 and y=-1
cout<<"\n bye...";
    
    
return 0;
}