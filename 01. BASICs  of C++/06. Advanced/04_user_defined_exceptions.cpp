#include <iostream>
using namespace std;

class ArraySizeZeroExcpetion{};
class ArraySizeNegativeExcpetion{};


int average(int arr[],int n){
if (n==0)throw ArraySizeZeroExcpetion();
if (n<0)throw ArraySizeNegativeExcpetion();

int sum=0;
for(int i=0;i<n;i++)
    sum+=arr[i];
return sum/n;
}

int main(){

int n ; cin>>n;
int *arr=new int [n];
for (int i=0;i<n;i++){
    cin>>arr[i];
    }


try {
    int res=average(arr, n);
    cout<<res;
    }
catch(ArraySizeZeroExcpetion &e1){cout<<"array size is zero";} //working
catch(ArraySizeNegativeExcpetion &e2){cout<<"array size is negative";}  //not working 

return 0;








}











