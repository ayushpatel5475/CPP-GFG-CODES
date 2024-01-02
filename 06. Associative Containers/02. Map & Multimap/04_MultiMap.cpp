#include <iostream>
#include <map>

using namespace std;

int main(){
    multimap < int, int> mp;

    mp.insert ({10, 20});
    mp.insert ({5, 50});
    mp.insert ( {10, 25});

    for (auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    
    }

cout<<"\nCount: \n";
    cout<<mp.count(10)<<endl;
    mp.erase(10);
     cout<<mp.count(10)<<endl;


multimap <int, int> mp2;

cout<<"\nLower and upper bound : \n";

mp2.insert  ({10,5});
mp2.insert  ({50,1});
mp2.insert  ({20,3});
mp2.insert  ({20,2});

auto it1=mp2.lower_bound (20), 
    it2=mp2.upper_bound(20);


    cout<<(*it1).first<<endl;
    cout<<(*it2).first<<endl;
    

cout<<"\nEQUAL RANGE: \n";

auto it3=mp2.equal_range(20);
for ( auto itr=it3.first; itr!=it3.second;itr++)
    cout<<itr->first<<" "<<itr->second<<endl;

}