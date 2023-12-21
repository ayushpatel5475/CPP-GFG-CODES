#include <iostream>
using namespace std;
int main()
{
  
  int arr[]={10,20,30};
  int *ptr=arr;
  cout<<*ptr<<" "<<ptr<<"\n";     //*ptr prints value and ptr prints location

ptr++;

  cout<<*ptr<<" "<<ptr<<"\n";     //*ptr prints value and ptr prints location

ptr--;

  cout<<*ptr<<" "<<ptr<<"\n" ;     //*ptr prints value and ptr prints location



    return 0;
}
