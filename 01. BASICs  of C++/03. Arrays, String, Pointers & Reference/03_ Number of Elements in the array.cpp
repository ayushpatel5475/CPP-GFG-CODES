#include <iostream>
using namespace std;
main()
{
  int arr[]={1,2,3,4,5,6,7,8};
   
   cout<<"Total size of array:   "; 
   cout<< sizeof(arr)<<"\n";
   cout<<"Number of elements in array:   "; 
   
   cout<<sizeof(arr)/sizeof(arr[0]);    // arr[0] denotes the 1st element of the array 

   
    return 0;
    
} 