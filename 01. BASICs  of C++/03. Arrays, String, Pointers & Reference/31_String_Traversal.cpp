#include <iostream>
using namespace std;

int main(){

string str="AYUSH patel\n";
cout<<"\n";

for(int i=0;i<str.length();i++){
    cout<<str[i];
}
cout<<"\n";
//Another method
for(char x:str)
    cout<<x;
cout<<"\n";



return 0;
}