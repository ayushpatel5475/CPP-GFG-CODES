#include <iostream>
#include <deque>
using namespace std;
int main (){
    deque<int> dq={10, 20, 30};
    dq.push_front(5);
    dq.push_back (50);
    for (auto x: dq)
        cout<<x<<" ";
        cout<<dq.front()<<" "<<dq.back();
   
    cout<<"\n";

deque <int> dq2={10,15,30,5,12};
auto it=dq2.begin();
it++;
dq2.insert ( it, 20);
 for (auto x: dq2)
        cout<<x<<" ";
cout<<"\n";
dq2.pop_front();
 for (auto x: dq2)
        cout<<x<<" ";
cout<<"\n";
dq2.pop_back();
 for (auto x: dq2)
        cout<<x<<" ";
cout<<"\n";

cout<<dq2.size();        


        return 0;
}