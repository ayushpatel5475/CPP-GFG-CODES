#include <iostream>
using namespace std;

int main() {
/*
bit wise OPERATOR 
AND &
OR |
XOR ^     1 for different 0 for same
*/
int x=3,y=6;          //3 in binary(011) and 6 in binary(110) 
cout<<(x&y)<<endl; 	//gives 2, means in BINARY form it is 2    (010)
cout<<(x|y)<<endl;		//gives 7, means in BINARY form it is 7    (111)
cout<<(x^y)<<endl;	//gives 5, means in BINARY form it is 5     (101)   XOR: Same pe 0 different pe 1

	return 0;
}
