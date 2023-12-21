#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
 int c,g,t[100][100],a[100][100];
 
 cin>>c>>g;
 for(int i=0;i<c;i++){
   for(int j=0;j<g;j++){
 
   cin>>a[i][j];
   }
 }
 for(int i=0; i<c; ++i)
   for(int j=0; j<g; ++j) {
      t[j][i] = a[i][j];
   }

  for(int i=0;i<g;i++){  //note this change first g then c
   for(int j=0;j<c;j++){
 
   cout<<t[i][j]<<" ";
      
   }
   cout<<endl;
 }
  return 0;
}