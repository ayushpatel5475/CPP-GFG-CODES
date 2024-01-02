#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    set<int, greater<int>> s2;
    s.insert(10);
    s.insert(5);
    s.insert(20);

    s2.insert(5);
    s2.insert(60);
    s2.insert(90);
    cout << "\n";
//one of printing
    for (int x : s)
        cout << x << " ";

    cout << "\n";
//Another way of printing(using iterator)

//set <int>:: iterator   ( use this of use 'auto')

    for (auto it = s2.begin(); it != s2.end(); it++)
    {
        cout << (*it) << " ";
    }


//rbegin, rend:
 cout << "\n";

 for ( auto it2=s.rbegin();it2!=s.rend();it2++)
{
        cout << (*it2) << " ";
    }

 cout << "\n";

//ERASE
auto it5=s2.find(7);
s2.erase(it5);   

 cout << "\n";

auto it3=s.find(10);
if ( it3==s.end())
    cout<<"Not found!\n";
else   
    cout<<"Found! \n";


if ( s.count(30))
    cout<<"Found!";
else    
    cout<<"not found";



 cout << "\n";

s.clear ();
cout<<s.size()<<" : which means after clear size is zero";

 cout << "\nlower bound: \n ";

//lower and upper bound
set <int> s3;
s3.insert ( 10);
s3.insert ( 5);
s3.insert ( 20);

auto it6 =s3.lower_bound(5);  
if ( it6 != s3.end())
    cout<<(*it6)<<" ";
else    
    cout<<"Given element is greater than the largest element";

 cout << "\n";

auto it7 =s3.lower_bound(6);    //this will return next most greatest element than 5
if ( it7 != s3.end())
    cout<<(*it7)<<" ";
else    
    cout<<"Given element is greater than the largest element";

 cout << "\n";

auto it8 =s3.lower_bound(25);   //in the set of 5 10 15 ,, 25 is not present or it the most greatest value .
if ( it8 != s3.end())
    cout<<(*it8)<<" ";
else    
    cout<<"Given element is greater than the largest element";

 cout << "\n";



 cout << "\nUpper bound: \n ";

 auto it9=s3.upper_bound(5);
 if (it9!=s3.end())
    cout<<(*it9)<<" ";
else    cout<<"Given Element is Greater than the largest";

return 0;
}