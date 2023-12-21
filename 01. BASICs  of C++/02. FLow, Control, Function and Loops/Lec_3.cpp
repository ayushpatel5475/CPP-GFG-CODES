#include <iostream>
using namespace std;

int main() {
int i;

cout<<"Enter number to check POSITIVE NEGATIVE OR ZERO:   \n";
cin>>i;
if(i>0)
{
cout<<"POSITIVE";
}
else if(i<0)
{
cout<<"NEGATIVE";
}
else if(i==0)
{
cout<<"ZERO";
}
else{

    cout<<"NUMBER IS WRONG";
}



    

return 0;
    
}