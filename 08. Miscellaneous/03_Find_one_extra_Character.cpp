#include <iostream>
#include <algorithm>
using namespace std;
/*
// Naive Approach
char findExtra(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int n = s1.length();

    for (int i = 0; i < n; i++)
        if (s1[i] != s2[i])
            return s2[i];

    return s2[n];
}

//efficeint solution: use COUNT ARRAY

char findExtra(string s1, string s2)
{
    // Initialize an array to store character counts, assuming ASCII characters (256 possible characters)
    int count[256] = {0};

    // Count occurrences of each character in s2
    for (char x : s2)
        count[x]++;

    // Subtract occurrences of each character in s1
    for (char x : s1)
        count[x]--;

    // Find the character with count 1 (the extra character)
    for (int i = 0; i < 256; i++)
        if (count[i] == 1)
            return (char)i;
}
*/

// Using BITWise Operator:

char findExtra(string s1, string s2)
{
    int n = s1.length();
    int res=0; 
    for (int i = 0; i < n; i++)
        res = res ^ s1[i] ^ s2[i];
    res = res ^ s2[n];
    return (char)res;
}

int main()
{

    string s1 = "abcd";
    string s2 = "abecd";

    cout << findExtra(s1, s2);

    return 0;
}