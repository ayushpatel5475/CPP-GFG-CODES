#include <iostream>

using namespace std;

int main()
{
    string str = "geeksforgeeks";
    cout << str << "\n";

    cout << str.length() << endl;
    str = str + "xyz";
    cout << str << endl;
    cout << str.substr(1, 3) << endl;

    cout << str.find("fo") << endl;

    int res = str.find("eek");
    if (res == string::npos)
        cout << "Not PRESENT\n";
    else
        cout << "First Occurence"
             << "at Index: " << res << "\n";

    // lexicographic comparision
    string s1 = "abc";
    string s2 = "bac";

    if (s1 == s2)
        cout << "Same\n";

    if (s1 > s2)
        cout << "s1 is greater\n";

    if (s1 < s2)
        cout << "s1 is smaller\n";
    /*
        string name;
        cout << "enter Your name: ";

        cin >> str; // Only read first word ( first name) AYUSH PATEL : AYUSH only

        cout << "Your name is : " << str << endl;
    */
    // getline
    string full_name;
    cout << "enter your FULL NAME: ";
    getline(cin, str);

    cout << "Your Full name is : " << str << endl;

    // Different ways of traversing the String

    string str1 = "gfg";

    for (int i = 0; i < str.length(); i++)
        cout << str1[i-1];
    cout << endl;

    for (char x : str1)
        cout << x;
    cout << endl;

    for (auto it = str1.begin(); it != str1.end(); it++)
        cout << (*it);

    return 0;
}