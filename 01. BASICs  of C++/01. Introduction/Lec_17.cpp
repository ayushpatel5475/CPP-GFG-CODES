#include <iostream>
using namespace std;
//TYPE CONVERSION-- We use static_cast in cpp
int main() {
	int x,y;
	x=15;y=2;
	double z;
	z=x/y;  
	// cout<<z; //This will give 15/2 =7 Only int part
	 cout<<static_cast<double>(x)/y;
	return 0;
}
