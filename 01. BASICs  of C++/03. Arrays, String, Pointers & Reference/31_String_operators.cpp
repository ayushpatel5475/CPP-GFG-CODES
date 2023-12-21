#include <iostream>
using namespace std;

int main(){
  string str="AYUSH ";
  cout<<str.length()<<endl;
  str=str+"Patel";
  cout<<str<<endl;
  cout<<str.substr(1,3)<<endl;
  cout<<str.find("yush")<<endl;  //CASE SENSITIVE and This will give random number if not used below Function
  
  int res=str.find("YUSH");
  if(res==string::npos)
     cout<<"not Present";
     else
     cout<<"First occuerence at index  : "<<res;
  
cout<<"\n\n";

string s1="abc";
string s2="bcd";

if(s1==s2)
    cout<<"Same";
else if(s1>s2)
    cout<<"Greater";  // lexoGraphically (mtlb kon phle aega kon baad me a or b )
    else
       cout<< "Smaller";
return 0;
}
