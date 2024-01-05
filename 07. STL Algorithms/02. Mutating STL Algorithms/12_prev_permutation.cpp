#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   
    vector <int> v={5,4,1,2,3};
    prev_permutation(v.begin(), v.end());

    for ( int x:v)
        cout<<x<<" ";



    return 0;
}