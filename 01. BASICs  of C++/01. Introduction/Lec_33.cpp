#include <iostream>
using namespace std;

int main() {
/********************************************************************************
bit wise OPERATOR 
LEFT shift
x:     0 0 1 1
x<<1:  0 1 1 0
x<<2:  1 1 0 0
x<<y: 1 1 0 0 0   if (y=3)
*/
int x=3;
cout<<(x<<1)<<endl;
cout<<(x<<2)<<endl;
int y=4;
int z=x<<y;
cout<<z<<endl<<"\n";

/********************************************************************************
RIGHT SHIFT
m:    1 0 0 0 1
m>>2: 0 0 1 0 0
m>>n: 0 0 0 0 1  if n=4
*/

int m=33;
cout<<(m>>1)<<endl;
cout<<(m>>2)<<endl;

int n=4;
int o=(m>>n);
cout<<o<<"\n"<<"\n";

/********************************************************************************* 
Bitwise NOT:
(x=1): 0001
(~x):  1110
*/

unsigned int p=5;    //unsigned int will lead simply NOT...but signed will  also show a negative number and that too not in binary
cout<<~p<<" This gives large number because 0000110 is changed in 1111001 which is very large number\n "<<"\n";	

/********************************************************************************* 
CASE of NOT in case of signed
it uese 2's complement representation. 
hence x: 0 0 1 0 1   (x=5)
	~x:  1 1 0 1 0
here     1 shows negative sign and rest   1 0 1 0  will print as 2s complement  (1s+1)
	2's: 1s+1;   = 0 1 0 1
						+1
				   0 1 1 1
				   which is 6 

				   soo total :  -6				
	
	*/		

int q=23;
cout<<~q<<"\n";



return 0;
}
