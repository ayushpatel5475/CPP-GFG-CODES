#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int fun(vector<int> &v)
{ // if we do not use & (reference here, it will not work)

    v.push_back(20);
    v.push_back(10);
}

int main()
{

    vector<int> v{50, 6, 0, 40, 80, 90, 9, 0};
    fun(v);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}