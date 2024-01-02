#include <iostream>
#include <set>
#include <limits.h>  //this is used for using INT_MAX and INT_MIN

using namespace std;

set <int> s;
void Insert(int x){
    s.insert(x);
}

bool Search ( int x){
    return (s.find(x)!=s.end());
}

void Delete(int x){
    s.erase(x);
}

int getCeiling(int x){
    auto it= s.lower_bound(x);
    if(it==s.end())
        return INT_MAX;
    else *it;
}

int getFloor( int x){
    auto it=s.lower_bound(x);
    if( it ==s.begin()){
        if (*it==x) return x;
        else return INT_MIN;
    }
    else{
        it--;
        return *it;
    }
    return 0;
}


int main() {
    // Sample usage of the provided functions
    Insert(10);
    Insert(5);
    Insert(20);

    cout << "Search for 5: " << (Search(5) ? "Found" : "Not Found") << endl;
    cout << "Search for 15: " << (Search(15) ? "Found" : "Not Found") << endl;

    cout << "Ceiling of 12: " << getCeiling(12) << endl;
    cout << "Floor of 12: " << getFloor(12) << endl;

    Delete(10);

    cout << "Search for 10 after deletion: " << (Search(10) ? "Found" : "Not Found") << endl;

    return 0;
}