#include <iostream>
using namespace std;

template <typename T>

T arrMax (T arr[], int n){
    T res=arr[0];
    for (int i=1;i<n;i++)
         if (arr[i]>res)
            res =arr[i];
    return res;
}

int main()
{
int arr1[]={10,20,30,40};
cout<< arrMax<int>(arr1, 4)<<"\n";
float arr2[]={10.25, 20.36, 60.95, 50.69, 241.36};
cout<< arrMax<float>(arr2,5);
}

