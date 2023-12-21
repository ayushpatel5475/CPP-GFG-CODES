#include <iostream>
using namespace std;

union Test{
  int x;
  int y; 
  char c; 
  double d;
  int arr[4];
};

int main(){
    Test t;
    t.x=10;
    cout<<t.x<<" "<<t.y<<endl;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
    cout<<sizeof(t); //This will give size of largest member in the union function which is array here size :16

} 