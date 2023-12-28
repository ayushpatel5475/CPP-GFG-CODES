#include <iostream>
#include <list>
using namespace std;

int main(){
    //push back and push front
    cout<<" push back and push front:  ";
    list <int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);
    for ( auto x: l)
        cout<<x<<" ";
 
 cout<<"\n pop front and pop back: ";
 //pop front and pop back
    list <int> l2={10,2,5,2,30};
    l2.pop_front();
    l2.pop_back();
    for ( auto it=l2.begin();it!=l2.end();it++)
        cout<<(*it)<<" ";
    
 cout<<"\ninsert front back : ";
 {//insert front back 
    list <int> l3={5,4,3,2,1};
 auto it=l.begin();
 it++;
 it=l.insert(it, 15);
 l.insert (it, 2,7);
 for ( auto x: l3)
        cout<<x<<" ";
        cout<<"\n";
 cout<<l.front()<<" "<<l.back()<<"\n";
 cout<<l.size(); 
 }
 cout<<"\nerase and remove: ";
{//erase and remove
 list <int> l4={10,30,50,40,10,90,10,0};
 auto it=l4.begin();
 
 for (auto x:l4)
    cout<<x<< " ";
 cout<<"\n";

 it=l4.erase(it);
 
 for (auto x:l4)
    cout<<x<< " ";
 cout<<"\n";

 l4.remove(10);
 for (auto x:l4)
    cout<<x<< " ";
 
 
}
 cout<<"\n MERGE: ";
 
 //merge
 list <int> l5={10,20,30,40,50};
 list <int> l6={60,70,80,90,100};

l5.merge(l6);
for ( int x:l5)
    cout<<x<<" ";

 
 
 
 
    return 0;
}