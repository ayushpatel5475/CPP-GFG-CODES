#include <iostream>
using namespace std;

int main() {
	string name;
	cout<<"Enter your FULL name:\n";
	getline(cin,name);
	//cin>>name;   -- it will ignore letters after Space " patel"

	cout<<"Hi "<<name<<",\n";
	cout<<"Welcome to Indian Adminstrative Services(IAS)";
	
	
	return 0;
}
