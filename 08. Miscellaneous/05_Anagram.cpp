#include <iostream>
#include <algorithm>
using namespace std;
/*
//naive Solution
bool anagram(string s1, string s2)
{
    int n1 = s1.length(), n2 = s2.length();
    if (n1 != n2)
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < n1; i++)
        if (s1[i] != s2[i])
            return false;
    return true;
}
*/

// Efficient solution : Character Counting
bool anagram(const string &s1, const string &s2) //& used for better efficiency
{
    int n1 = s1.length(), n2 = s2.length();
    if (n1 != n2)
        return false;

    int count[256] = {0};

    for (int i = 0; i < n1; i++)
        count[s1[i]]++;
    for (int i = 0; i < n2; i++)
        count[s2[i]]--;
    for (int i = 0; i < 256; i++)
        if (count[i] != 0)
            return false;
    return true;
}
int main()
{

    string s1 = "ababre";
    string s2 = "reabab";

    cout << anagram(s1, s2) << "\n";

    string s3 = "ababraae";
    string s4 = "reabab";

    cout << anagram(s3, s4);
}