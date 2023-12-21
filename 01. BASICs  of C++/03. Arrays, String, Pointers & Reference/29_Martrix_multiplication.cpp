#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    cout<<"enter size of array";
int n; cin>>n;

vector<vector<int>> matA (n, vector<int>(n,0));
vector<vector<int>> matB (n, vector<int>(n,0));
vector<vector<int>> res (n, vector<int>(n,0));
cout<<"Enter matrix A: ";
//input of matrix A
for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int t;
        cin>>t;
        matA[i][j]=t;
    }
}
cout<<"Enter matrix B: ";
//input of matrix B
for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int t;
        cin>>t;
        matB[i][j]=t;
    }
}
//Multiplication


//input of matrix A
for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        res[i][j]=0;
       for (int k=0;k<n;k++){
        res[i][j]=res[i][j]+(matA[i][k]*matB[k][j]);
       }
    }
}
cout<<"Answer is : \n ";
//printing answer matrix:


for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<res[i][j]<<" ";
    }
    cout<<"\n";
}
}