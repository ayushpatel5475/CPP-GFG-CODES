#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // This show conversion of Decimal to hex and oct
	int a=26,b=20;
    cout<<a<<" "<<b<<"\n";
cout<<std::hex;
    cout<<a<<" "<<b<<"\n";
cout<<std::oct;
cout<<a<<" "<<b<<"\n"<<"\n";


//this shows SHOWING the values if they are in hex or oct or decimal

int c=26;
cout<<std::showbase;
cout<<std::oct;
cout<<c<<"\n";
cout<<std::hex;
cout<<c<<"\n"<<"\n";

cout<<std::showpos;  //
cout<<c<<"\n";
cout<<std::uppercase;
cout<<c<<"\n"<<"\n";

cout<<std::dec; 
cout<<std::noshowpos;

int z=12;
cout<<std::setw(5);
cout<<std::setfill('*');
cout<<z<<"\n"<<"\n";

cout<<std::setw(5);
cout<<"Hi"<<"\n";

cout<<std::left;
cout<<std::setw(5);
cout<<z<<"\n";

	return 0;
}
