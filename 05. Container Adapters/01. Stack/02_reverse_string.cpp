/* Stack is not Pprefered for doing reverse, it can be simply done by using reverse function
reverse ( str.being(), str.end());

we use stack in reversing a Forward list.

*/



#include <iostream>
#include <stack>

using namespace std;

void reverse(string str){
stack <char> s;
for ( int i=0;i<str.length();i++){
    s.push(str[i]);
}
for ( int i=0;i<str.length();i++){
    str[i]=s.top();
    s.pop();
    
        }
cout<<str<<" ";
}

int main(){

reverse ("AYUSH");

}