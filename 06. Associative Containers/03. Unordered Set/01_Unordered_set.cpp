#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for (int x : s)
        cout << x << " ";

    cout << "\n";
    if (s.count(15))
        cout << "Found!\n";
    else
        cout << "NOT Found! \n";

    // another way of printing
    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << " ";
    cout << endl;

    cout << s.size() << "\n";

    s.erase(15);
    cout << s.size() << "\n";

    s.clear();
    cout << s.size() << "\n";
    cout << "\n";

    return 0;
}