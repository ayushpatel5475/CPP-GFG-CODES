#include <iostream>
using namespace std;
int m=5; //Global Variable
int main()
{
    cout << "Hello World This is my 1st C++ CODE"
         << "\n\n";

int x=5, y=9; //Local Variables
cout<<x<<"\n"<<y<<"\n";
    
//data-TYPES:

int age=21;
string name="AYUSH";
char gender='M';
float weight=60;
bool isMarried=false;

if(x==y){
    int n=5;  //Local Varible inside the Scope of if
    cout<<n;
}

int p;
cout<<p<<"\n";  //Note this will give a garbage value 
static int q;
cout<<q;  //Note this will NOT give a garbage value since Static












return 0;
}

/*This is Multi- line
 Comment*/

// Single Line Comment 