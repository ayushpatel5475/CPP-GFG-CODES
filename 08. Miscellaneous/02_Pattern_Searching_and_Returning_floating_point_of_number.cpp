#include <iostream>

using namespace std;

void patSearch(string txt, string pat)
{
    int pos = txt.find(pat);
    while (pos != string::npos)
    {
        cout << pos << " ";
        pos = txt.find(pat, pos + 1);
    }
}
string digitsAfterDecimal(const string &no)  //using & for efficiency of the code
{
    int pos = no.find(".");
    if (pos == string::npos)
        return " ";
    else
        return no.substr(pos + 1);
}
int main()
{
    string str = "geeks for geeks";
    string pat = "geeks";
    patSearch(str, pat);
    cout << "\n\n";
    string number = "3.14159";
    string result = digitsAfterDecimal(number);
    cout << "Digits after decimal: " << result << endl;
    return 0;
}
