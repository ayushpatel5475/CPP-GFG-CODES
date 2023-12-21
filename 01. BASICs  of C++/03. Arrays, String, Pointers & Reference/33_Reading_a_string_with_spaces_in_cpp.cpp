#include <iostream>
using namespace std;

int main(){

string name;
cout<<"Enter Your name user : ";
//cin>>name; // it will only accept first name
getline(cin, name);  // OR: getline(cin, name,'$'); --> means it will stop rading after scannig $ symbol in input 
cout<<"Your Name is: "<<name;


return 0;
}
