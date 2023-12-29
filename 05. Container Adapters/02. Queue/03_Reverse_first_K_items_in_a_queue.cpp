#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// let q={10,20,30,40,50} , k=3

void reverseK( queue <int> &q, int k){
    //edge cases:
    if (q.empty()==true || k> q.size() || k<=0)
            return ;

    // q={40,50} s={10,20,30}
    stack <int> s;
    for ( int i=0;i<k;i++){
        s.push (q.front());
        q.pop();
    }
    

    //q={40,50,30,20,10}  s={}
    while (s.empty()==false){
        q.push (s.top());
        s.pop();
    }

    //q={30,20,10,40,50}
    for (int i =0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}

