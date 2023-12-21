#include <iostream>
using namespace std;
#include <cstring>
int main(){
 char s1[]="gfg";   //'g','f','g','/0'
 char s2[]={'c','p','p','\0'} ;
 
 cout<<strlen(s1)<<"\n";  //#include <cstring>
 cout<<strlen(s2)<<"\n";

    return 0;
} 