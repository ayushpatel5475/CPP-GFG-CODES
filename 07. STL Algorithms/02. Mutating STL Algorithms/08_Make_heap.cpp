#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> v = {15, 6, 7, 12, 30};
    make_heap(v.begin(), v.end());
    cout << v.front() << endl;

    vector<int> v2 = {15, 6, 7, 12, 30};
    make_heap(v2.begin(), v2.end(), greater<int>());
    cout << v2.front() << endl;
    pop_heap(v2.begin(), v2.end(), greater<int>());
    cout<<v2.front()<<endl;

    v2[4]=2;  //adds 2 at position 4 

    push_heap(v2.begin(), v2.end(), greater <int>());
    cout<<v2.front()<<endl;  //showing 2 becuase in case of min heap 2 is smallest 
   
    sort_heap(v2.begin(), v2.end(), greater <int>());
    for ( int x: v2)
        cout<<x<<" ";
   
   
   
   
   
    return 0;
    }