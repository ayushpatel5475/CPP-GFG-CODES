#include <iostream>
using namespace std;

//if array is shorted in ascending form then return TRUE else FALSE

bool check_if_shorted(int arr[],int n){
    for (int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
        return true;
    }

}

int main()
{
cout<<"enter the size of array: ";
int n;
cin>>n;
int arr[n];

cout<<"Please enter your array\n";
for (int i=0;i<n;i++)
{
cin>>arr[i];
}

cout<<"The Array you entered is:";
for (int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}


if(check_if_shorted(arr,n)==false){
    cout<<"NOT SHORTED";
}
else{
    cout<<"SHORTED";
}


return 0;

}