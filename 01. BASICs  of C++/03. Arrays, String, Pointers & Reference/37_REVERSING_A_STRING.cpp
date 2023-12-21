#include <iostream>
using namespace std;

int main(){
cout<<"Enter any string: ";
    string s;
   getline(cin, s);

    string newstring="";
    int l=s.length()-1;

while(l>=0){
    newstring=newstring + s[l];
    l--;
}
cout<< newstring;


    return 0;
}