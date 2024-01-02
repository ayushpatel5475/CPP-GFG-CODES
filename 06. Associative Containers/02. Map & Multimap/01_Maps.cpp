#include <iostream>
#include <map>

using namespace std;

int main (){
map <int, int> m;


//insertion
m.insert ({10, 200});
m[5]= 100; //another way of inserting
m.insert ( {3,300});
m.at ( 10 )=500; // use of at operator
cout<<m[20];  // this is benifit where item not present is inserted in to the map

//printing map
for ( auto &x : m){
    cout<<x.first<<"  " <<x.second  << "\n";
}

//size
cout<<"\nSize of map is: "<<m.size()<<"\n"; 



//clear function 
m.clear();

cout<<m.size();


cout<<"\n\n";


map < int , string> m2;
m2.insert ( {5,"gfg"});
m2.insert ( {8,"ide"});
m2.insert ( {15,"practice"});

if ( m.find(5)==m.end())
    cout<<"Not found!";
    else cout<<"Found!!";


cout<<"\n\n";

cout<<"\nprint by iterator( Another way ): \n";

for ( auto it =m2.begin();it !=m2.end();it++){
    cout<<(*it).first<<" "<< (*it).second << endl;
}

cout<<"\n\nCount: \n";

if ( m2.count(15)==0)
    cout<<"element is not present";
  else
     cout<<" element is present";

cout<<"\n\nlower_bound:\n";

auto it2=m2.lower_bound(2);
if ( it2!=m2.end())
    cout<<(*it2).first;
else 
    cout<<"no equal or greater value is found!";

//Similarly Upper Bound

m2.erase (15);

return 0;

}