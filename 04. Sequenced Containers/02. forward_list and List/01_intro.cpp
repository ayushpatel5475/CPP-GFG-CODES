#include <iostream>
#include <vector>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l = {10, 15, 20};
    l.push_front(5);
    l.push_front(3);
    l.pop_front();

    for (int x : l)
        cout << x << " ";

    cout << "\n";

    forward_list<int> l2;
    l2.assign({1, 2, 3, 1, 1, 4, 1, 5, 6});
    l2.remove(1); // this will remove all '1' from the list
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << (*it) << " ";
    }

    cout << "\n";

    forward_list <int> l3;
    l3.assign({60,5,40,90});
    forward_list <int> l3;
    

    return 0;
}