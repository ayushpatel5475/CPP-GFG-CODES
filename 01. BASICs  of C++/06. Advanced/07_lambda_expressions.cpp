#include <bits/stdc++.h>
using namespace std;
//Sorting by absolute values using Lambda function
int main()
{
    int arr[] = {10, -20, 5, 30};
    auto myCmp = [](int a, int b) 
    {// Lambda function used
         return abs(a) < abs(b); 
         };  

int n=sizeof(arr)/sizeof(arr[0]);
sort(arr, arr+n, myCmp);
for (auto x:arr)
cout<<x<<" ";
return 0;



}