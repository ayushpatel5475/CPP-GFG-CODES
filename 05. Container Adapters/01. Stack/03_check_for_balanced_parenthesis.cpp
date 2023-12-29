#include <iostream>
#include <stack>

using namespace std;

bool matching(char a, char b)
{
    return ((a == '{' && b == '}') || (a == '[' && b == ']') || (a == '(' && b == ')'));
}

bool isBalanced(string str)
{
    stack<int> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]); // if [ , {, ( is encountered then push to stack
        }
        else
        {
            if (s.empty() == true)
            { //  in edge cases like } ] )
                return false;
            }
            else if (matching(s.top(), str[i]) == false)
            { // Matching the closing braces in stack from the string
                return false;
            }
            else
            {
                s.top();
            }
            return (s.empty() == true);
            
                  }
    }
    }
    
    


int main(){
    
    isBalanced("{[]}()");
    cout<<"\n";
    isBalanced("{[]}}){})");

}
