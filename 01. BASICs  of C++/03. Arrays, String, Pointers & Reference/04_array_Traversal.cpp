//Array Tarversal

#include <iostream>
using namespace std;
main()
{int i,n;
  int arr[]={10,20,30,40,50};
   
   cout<< sizeof(arr)<<"\n";
   cout<<"\nNumber of elements in array:   "; 
   
   n=sizeof(arr)/sizeof(arr[0]);
for( i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<"\n\n\n\n";

//ANOTHER METHOD:

for(int x:arr)
cout<<x<<" ";
    return 0;  
} 