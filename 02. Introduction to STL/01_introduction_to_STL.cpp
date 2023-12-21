#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int arr[]={50,40,60,80,30,70};

sort(arr, arr+6);
for ( int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";

if ( binary_search(arr,arr+6,80)){
    cout<<"PRESENT\n";
        }
else{
    cout<<"NOT PRESENT\n";
}

if ( binary_search(arr,arr+6,8)){
    cout<<"PRESENT\n";
        }
else{
    cout<<"NOT PRESENT\n";
}

return 0;


}