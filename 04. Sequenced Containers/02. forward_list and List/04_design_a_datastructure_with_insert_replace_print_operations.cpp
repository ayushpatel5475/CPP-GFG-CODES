/*Design a data structure that supports the following operators on a sequence
1. insert (x): Insert at the end
2. replace (x, seq) : Replace the first occurance of x with given seq.
3. print(): Print the current sequence
*/


#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

list <int> l;
void insert (int x){l.push_back(x);}
void print(){
    for (int x:l)
        cout<<x<<" ";
    cout<<"\n";
} 

void replace (int x, vector <int> & seq){
   auto it =find(l.begin(), l.end(),x);
   if ( it==l.end())
    return ;
it =l.erase (it);
l.insert (it, seq.begin(), seq.end());
}
int main(){
    insert(3);
    insert (10);
    insert (2);
    insert (10);
    print();
    vector <int> seq ={20, 30 , 40, 50};
    replace (10, seq );
    print();
    return 0;
}












