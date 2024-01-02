#include <iostream>
#include <set>

using namespace std;  // Fix the typo in 'namespace'

int main() {
    multiset<int> ms;

    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(40);
    ms.insert(40);

    ms.erase(ms.find(10));  // Use ms.find(10) to erase only one occurrence

    for (auto x : ms)
        cout << x << " ";


    cout<<"\n"<<ms.count(40)<<"\n";
 
//type 'auto' or type: 'pair <multiset<int>::iterator, multiset<int>::iterator>

auto it = ms.equal_range ( 20 );
cout<<*it.first<<" "<<*it.second;

    return 0;  // Add a return statement at the end of the main function
}
