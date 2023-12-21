#include <iostream>
#include <math.h>
using namespace std;
//Binary to Decimal
main()
{
   //1 0 1 1   1+2+8
int i,n,ld;    //ld- last digit 
cout<<"ENTER BINAR Y NUMBER: ";
cin>>n;
int val=0;
int base=1;

while(n>0)
{
   int ld=n%10;
   val=val +(ld*base);
   n=n/10;
   base=base *2;
}
cout<<val;



    return 0;

}