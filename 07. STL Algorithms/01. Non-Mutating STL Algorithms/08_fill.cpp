#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
  vector<int> v = {10, 20, 30, 40};
  fill(v.begin(), v.end(), 5);

  for (int x : v)
    cout << x << " ";

  cout << "\n\nusing array:\n";

  int arr[] = {10, 20, 30, 40};

  fill(arr + 1, arr + 4, 5); // index: 1 to last
  for (int x : arr)
    cout << x << " ";

  cout << "\n\nusing list:\n";
  list<int> l = {20, 10, 30, 50, 10};
  fill(l.begin(), l.end(), 5); // LIST DO NOT ALLOW +2 -1 operations: l.end()-2 ( not allowed)
  for (int x : l)
    cout << x << " ";

  cout << "\n\nIn list:\n";

  string s = "geeks";
  fill(s.begin() + 2, s.end(), 'g');
  cout << s;

  return 0;
}