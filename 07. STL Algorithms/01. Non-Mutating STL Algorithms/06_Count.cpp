#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main(){
        vector <int> v={30, 20, 5, 10, 6, 10, 10};
        cout<<count(v.begin(), v.end(), 10);
cout<<"\nUsing array: \n";
int arr[]={10,5,10,7,10,20,5,5,5};
cout<<count(arr, arr+6, 5);

cout<<"\nUsing List: \n";
list <int> l ={10,20,30,10,20,30};
cout<<count ( l.begin(), l.end(), 20);


cout<<"\nFor String: \n";
string s="GeeksforGeeks";
cout<<count(s.begin(), s.end(), 'e');


        return 0;
}