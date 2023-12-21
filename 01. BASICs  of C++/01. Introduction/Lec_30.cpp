#include <iostream>
using namespace std;

int main() {

int x=10,y=20;
bool res=(x>0&&x<100);
cout<<res;

res=(x>0||x>y);
cout<<"\n"<<res;
res=!res;
cout<<"\n"<<res<<"\n";    //1  means true and 0 means false
 

	return 0;
}
