#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double x=1.23,	y=1122456.453;
	double z=1.2e+7;
cout<<z<<"\n";
	cout<<std::fixed;			//This will print all the zeroes after decimal of DOUBLE size
	cout<<x<<"\n"<<y<<"\n";

cout<<std::setprecision(2);      //this will print only 2 digits after decimal
	cout<<x<<"\n"<<y<<"\n";
	
cout<<std::defaultfloat;	//THis reset the setting of fixed of setPrecision


cout<<z;


	return 0;
}
