#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
/* 
// Naive method: : O(n)
vector<pair<int, int>> v;

int get(int id) {
    for (int i = 0; i < v.size(); i++)
        if (v[i].first == id)
            return v[i].second;

    return 0;
}

void set(int id, int bal) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first == id) {
            v[i].second = bal;  // Fix: Use assignment operator instead of equality check
            return;
        }
    }
    v.push_back({id, bal});
}
*/

// Using unordered Map : O(1)

unordered_map<int, int> m;
int get(int id)
{
    return m[id];
}
void set(int id, int bal)
{
    m[id] = bal;
}
int main()
{
    // Example usage:
    set(1, 1000);
    set(2, 2000);

    cout << "Balance for account 1: " << get(1) << endl;
    cout << "Balance for account 2: " << get(2) << endl;

    // Update balance for account 1
    set(1, 1500);

    cout << "Updated balance for account 1: " << get(1) << endl;

    return 0;
}
