#include <iostream>
#include <map>

using namespace std;
multimap < int, string> m;

void addItem (string s, int p ){
    m.insert ({p, s});
    }
void find( int p){
    auto ip=m.equal_range(p);
    for ( auto it=ip.first; it!=ip.second;it++)
        cout<<it-> second <<" "<<it -> first <<endl;
    
}

void printSorted (){
    for ( auto x: m)
        cout<<x.second <<" "<<x.first<<endl;
        }
void printGreater(int p ){
    auto it=m.upper_bound(p);
    while ( it!=m.end())
        {
            cout<<it->second <<" "<<it-> first<<endl;
        }
}

void printSmaller(int p)
        {
            auto it1=m.lower_bound (p);
            for ( auto it2=m.begin();it2!=it1;it2++){
                cout<<it2->second<<" "<<it2->first<<endl;
            }
        }
