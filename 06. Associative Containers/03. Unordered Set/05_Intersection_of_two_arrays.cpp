#include <iostream>
#include <unordered_set>

using namespace std;
/*
//naive Solution ( O(n^2)):

void intersection(int a[], int m, int b[], int n)
{
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << a[i] << " ";
    }
}
*/

// Efficient Solution ( unordered Set : O(m+n)) and auxillary sapce: O(n):
void intersection(int a[], int m, int b[], int n)
{
    unordered_set<int> s;
    for (int j = 0; j < n; j++)
        s.insert(b[j]);
    for (int i = 0; i < m; i++)
    {
        if (s.find(a[i]) == s.end())
            cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {10, 15, 20, 25, 30, 50};
    int b[] = {30, 5, 15, 80};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    intersection(a, m, b, n);
}
