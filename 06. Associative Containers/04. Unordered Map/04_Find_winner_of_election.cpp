#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string findWinner(string arr[], int n)
{
    unordered_map<string, int> m;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    int max_freq = 0;
    string winner;
    for (auto x : m)
    {
        if (x.second > max_freq)
        {
            max_freq = x.second;
            winner = x.first;
        }
        // lexicographical CHECK in case of SAME Votes
        else if (x.second == max_freq && x.first < winner)
            winner = x.first;
    }
    return winner;
}

int main() {
    string candidates[] = {"Alice", "Bob", "Charlie", "Bob", "Alice", "Alice", "Charlie", "Charlie"};
    int n = sizeof(candidates) / sizeof(candidates[0]);

    string winner = findWinner(candidates, n);

    cout << "The winner is: " << winner << endl;

    return 0;
}