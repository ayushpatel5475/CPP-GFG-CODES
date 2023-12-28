#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v{10, 20, 30, 40, 50};
    for (int x : v)
    {
        cout << x << " ";
    }

    // pop_back()
    cout << "\n pop_back():  ";
    v.pop_back();
    for (int x : v)
    {
        cout << x << " ";
    }

    // front() and back()
    cout << "\n front and back:  ";
    cout << v.front();

    cout << "\n";
    cout << v.back();

    // insert
    cout << "\nINSERT:  ";
    v.insert(v.begin(), 100);
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << "\n";
    v.insert(v.begin() + 2, 200);
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << "\n";
    v.insert(v.begin(), 2, 500); // insert 500 two times in begining
    for (int x : v)
    {
        cout << x << " ";
    }

    vector<int> v2;
    cout << "\n";
    v2.insert(v2.begin(), v.begin(), v.begin() + 3);
    for (int x : v2)
    {
        cout << x << " ";
    }

    v.erase(v.begin());
    cout << "\n ERASE:  ";
    for (int x : v)
    {
        cout << x << " ";
    }

    v2.erase(v2.begin(), v2.end() - 1);
    cout << "\n";
    for (int x : v2)
    {
        cout << x << " ";
    }

    cout << "\n Clear and Empty:  ";
    v.clear();
    if (v.empty() == 1)
    {
        cout << "EMPTY";
    }
    else
    {
        cout << "NOT EMPTY";
    }

    cout << "\n RESIZE:  ";
    v2.resize(5, 300);

    for (int x : v2)
    {
        cout << x << " ";
    }
}