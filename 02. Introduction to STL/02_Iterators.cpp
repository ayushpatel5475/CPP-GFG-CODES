// use of begin() and end()


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
vector <int> v={10,50,60,40,90};
vector <int> :: iterator i=v.begin();

cout<< *i << "  ";
i++;
cout<< *i<< " ";

i=v.end();
cout<< *i<< " "; // this shows garbage value since end shows location of, after-last element.

i--;
cout<< *i<< " ";




}