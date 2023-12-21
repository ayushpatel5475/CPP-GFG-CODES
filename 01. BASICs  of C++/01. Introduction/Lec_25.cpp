#include <iostream>
#include <iomanip>
using namespace std;

int main() {

 cout<<std::setprecision(4);
double x=15.5683,y=34267.1;
cout<<x<<" "<<y<<"\n"<<"\n";   //NOW this will NOT ROUND off 
cout<<std::uppercase<<y<<"\n";   //shows exponent e in CAPITAL FORM E

double z=-1.23;
cout<<std::showpoint<<z<<"\n";   //shows trailing zeroes
cout<<std::showpos<<z<<"\n"<<"\n";   //shows positive sign or negative sign


	return 0;
}
