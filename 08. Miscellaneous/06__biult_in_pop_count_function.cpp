 #include <iostream>

using namespace std;

int main() {
    int n = 5;
    int m = 8;

    cout << __builtin_popcount(n)<<"\n";
    cout << __builtin_popcount(m);
    return 0;
}
