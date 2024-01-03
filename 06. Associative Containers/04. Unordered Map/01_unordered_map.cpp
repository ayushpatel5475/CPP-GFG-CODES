#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["ide"] = 30;
    m.insert({"courses", 15});
    for (auto x : m)
        cout << x.first << " " << x.second << endl;
    cout<<endl;

    if ( m.find("ide")!=m.end())
        cout<<"Found!\n";
else    
    cout<<"Not found!\n";

cout<<"\nAnother way of printing:\n"; 
for ( auto it=m.begin(); it!=m.end();it++){
    cout<<it->first  <<" "<<it->second<<endl;
}

cout<<m.size()<<"\n";
m.erase("ide");

cout<<m.size()<<"\n";

    
    
    return 0;
}