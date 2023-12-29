#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>

using namespace std;

// Method 1: Using unordered map and vector
bool compare(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}

void printFrequent(int arr[], int n, int k) {
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < k && i < v.size(); i++)
        cout << v[i].first << " ";
}

// Method 2: Using unordered Map and Priority Queue based Solution
struct myCmp {
    bool operator()(pair<int, int> p1, pair<int, int> p2) {
        if (p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second < p2.second;
    }
};

void printMostFreq(int arr[], int n, int k) {
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    priority_queue<pair<int, int>, vector<pair<int, int>>, myCmp> pq(m.begin(), m.end());

    for (int i = 0; i < k && !pq.empty(); i++) {
        cout << pq.top().first << " ";
        pq.pop();
    }
}

int main() {
    // Example usage for Method 1
    int arr1[] = {3, 1, 4, 4, 5, 2, 6, 1, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;

    // Call the function to print k most frequent elements using Method 1
    printFrequent(arr1, n1, k1);
    cout << endl;

    // Example usage for Method 2
    int arr2[] = {3, 1, 4, 4, 5, 2, 6, 1, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;

    // Call the function to print k most frequent elements using Method 2
    printMostFreq(arr2, n2, k2);

    return 0;
}
