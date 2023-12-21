// use of next() and prev() and  advance()

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
vector <int> v={10,50,60,40,90};
vector <int> :: iterator i=v.begin();

cout<< *i<<" ";

i=next(i,2);
cout<< *i<<" ";

i=next (i);
cout<< *i<<" ";

i=prev(i,2);
cout<< *i<<" ";

i=prev(i);
cout<< *i<<" ";

advance(i,3);   //see there is no need to assign the value in i 
cout<< *i<<" ";

}