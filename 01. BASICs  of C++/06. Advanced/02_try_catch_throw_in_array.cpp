#include <iostream>
using namespace std;
int average(int arr[],int n)throw(string)  //good practice to write throw here.
{
    if(n==0){
        throw string("Array size is zero");
        int sum=0;
        for(int i=0;i<n;i++)
        sum=sum+arr[i];
    return sum/n;
    }
}
int main(){
int arr[]={4,5,6};
int n=0;

try {
int res=average(arr, n);
cout<<res;}
catch (string &e){cout<<e;}
cout<<"\n bye...";
    
    
return 0;
}