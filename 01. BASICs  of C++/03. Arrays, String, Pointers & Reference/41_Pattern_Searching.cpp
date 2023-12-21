#include <bits/stdc++.h>
using namespace std;

void printIndex(string text, string pattern){
int found=text.find(pattern);
while (found !=string::npos)    //npos means '/0'
{
    cout<<"Pattern Found at index "<<found<<endl;
    found=text.find(pattern, found +1);
}


}
int main(){

    string text, pattern;
    cout<<"Enter the text : ";
    getline(cin,text);
    cout<<"Enter the Pattern : ";
     getline(cin,pattern);
    printIndex(text, pattern);

return 0;
}