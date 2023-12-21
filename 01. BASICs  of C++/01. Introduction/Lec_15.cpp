#include <iostream>
#include <typeinfo>
using namespace std;
//AUTO KEYWORD and Type ID
int main() {
	auto a=50;
	auto b=5.55;
	auto c='a';
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	cout<<typeid(a).name()<<"\n"<<typeid(b).name()<<"\n"<<typeid(c).name();
	return 0;
}
