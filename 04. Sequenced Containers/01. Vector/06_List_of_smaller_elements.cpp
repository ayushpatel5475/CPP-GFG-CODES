#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

vector <int> getSmaller( int arr[], int n, int k){
vector <int> res;
for (int i=0;i<n;i++)
    if (arr[i]<k)
        res.push_back(arr[i]);
    return res;

}


int main(){
int arr[]={8,100,20,40,3,7};


vector <int> res=getSmaller(arr, 5,25);
for (int x:res)
    cout<<x<<" ";
    return 0;
}