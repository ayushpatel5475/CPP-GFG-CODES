//Pallindrome : abba (read from front and back it should be same)
// aabbaa : yes , abc : no
#include <iostream>
using namespace std;

int main(){
        string s;
        getline(cin,s);

        int start= 0;
        int end=s.length()-1;

    while (start <end){
        if (s[start] != s[end]){
            cout<<"No";
            return 0;
        }
        else{
            start++;
            end--;
        }
        cout<< "Yes";
        break;

    }


    return 0;
} 
