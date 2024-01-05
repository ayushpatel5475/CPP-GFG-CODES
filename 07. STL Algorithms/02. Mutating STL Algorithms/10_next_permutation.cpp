#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;

int main(){
    vector <int> v={1,2,5,4,3};

    next_permutation(v.begin(), v.end());
    for ( int x:v)
        cout<<x<<" ";
    return 0;
}