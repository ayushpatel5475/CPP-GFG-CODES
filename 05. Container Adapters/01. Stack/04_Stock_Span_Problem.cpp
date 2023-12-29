#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> s;
    int n=s.size();
    int arr[100];


    s.push(0);
    for ( int i =1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<= arr[i]){
         int span= (s.empty())? (i+1) : (i-s.top());
         cout<<span<<" ";
         s.push(i);
        }
    }
}
