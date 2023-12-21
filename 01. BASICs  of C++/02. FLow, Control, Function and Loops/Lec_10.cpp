#include <iostream>
using namespace std;

int MAX(int a, int b)
{
if(a>b)
return a ;
else return b;
}

int main() {

int x,y;
cout<<"ENTER TWO numbers";
cin>>x>>y;
cout<<MAX(x,y);
//return MAX;
return 0;
    


}