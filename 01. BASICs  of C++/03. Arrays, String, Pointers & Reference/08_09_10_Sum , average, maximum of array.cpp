#include <iostream>
using namespace std;

//SUM and AVERAGE of elements of the array 

int main()
{
int arr[5];
//Enter array by user
cout<<"Please enter your array\n";
for (int i=0;i<5;i++)
{
cin>>arr[i];
}
//print array
cout<<"The Array you entered is:\n";
for (int i=0;i<5;i++)
{
cout<<arr[i]<<" ";
}

//SUM code:
int sum=0;
for (int i=0;i<5;i++)
{
    sum=sum+arr[i];
    
}

cout<<"\n The Sum of all elements of array is:  "<<sum<<"\n";

//average code:

int total=0; //total number of elements in a array
total=sizeof(arr)/sizeof(arr[0]);

int avg=0;
avg=sum/total;

cout<<"The average of all elements of array is: "<<avg<<"\n";


//maximum element code:
int max=arr[0];
for (int i=0;i<5;i++){
if(arr[i]>max)
{
max=arr[i];
}
}
cout<<"The Maximum Element is: "<<max<<"\n";
return 0;

}