#include <iostream>
#include <cmath>
using namespace std;


void printDetails(int id, string name="NA",string service="NA",string cadre="NA")
{
cout<<"YOURID IS:"<<id<<"\n";
cout<<"YOUR Name IS:"<<name<<"\n";
cout<<"YOUR SERVICE IS:"<<service<<"\n";
cout<<"YOUR CADRE IS:"<<cadre<<"\n\n";
}

main()
{
int id;
string name,service,cadre;

printDetails(101,"AYUSH PATEL","IAS","UTTAR PRADESH");
printDetails(102,"NISHANT JAIN","IAS","RAJASTHAN");
printDetails(103,"RISHAB BHOLA","IPS","UTTAR PRADESH");
printDetails(101,"ANJALI BIRLA","IFS","USA");

id=102;
name="";
service="IAS";
cadre="";


id=103;
name="";
service="IPS";
cadre="UTTAR PRADESH";

return 0; 

}


