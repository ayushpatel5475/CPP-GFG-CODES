#include <algorithm>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

void printFirstN(int n) {
    queue<string> q;  // Use string type for the queue

    q.push("5");
    q.push("6");

    for (int count = 0; count < n; ++count) {
        string curr = q.front();  // Use front() instead of top() for queues
        cout << curr << " ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
    }
}

int main() {
    printFirstN(5);  // Example usage
    return 0;
}
