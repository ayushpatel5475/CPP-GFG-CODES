#include <iostream>
using namespace std;
//LAST DIGIT   ke liye digit mod 10 kr do bs
int main() {
for (int i=1;i<=5;i++){
int x;
cout<<"enter the digit you want to get last digit:\n";
cin>>x;

cout<<"the last digit is:"<<(x%10)<<"\n";
}
	return 0;
}
