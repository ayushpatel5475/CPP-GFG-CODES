#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int x=50,y=70;

cout<<(x+y)<<"\n"
    <<(x-y)<<"\n"
    <<(x/y)<<"\n"
    <<(x*y)<<"\n"            
    <<(x%y)<<"\n";         //mod do not change even if x and y are of double values(egnore after deciaml)

cout<<(10%3)<<"\n";
cout<<(10%-3)<<"\n";     //only shows negative if 10 is negative
cout<<(-10%3)<<"\n";


	return 0;
}
