#include <iostream>
using namespace std;
#include <vector>
int main(){

    int m=3,n=2;
// Normal Initialisation
    // int arr[m][n];

//Double Pointer Method
/*    int **arr;
    arr=new int*[m];
    for (int i=0;i<m;i++){
        arr[i]=new int [n];
    }
*/
// array of pointers:
    /*
    int *arr[m];
    for (int i=0;i<m;i++){
    arr[i]=new int [n];
*/


//Array of Vectors:
/*
vector <int> arr[m]; // use #include <vector>
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
            arr[i].push_back(10); //This will print 10 in every row and colmn of array

        }
}

*/


vector<vector <int>> arr; // use #include <vector>
for(int i=0;i<m;i++){
    vector <int> v;
    for(int j=0;j<n;j++){
           v.push_back(10); //This will print 10 in every row and colmn of array
            arr.push_back(v);
        }
}

    // (comment this in case of vectors)
    // for (int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         arr[i][j]=i+j;

    //     }
    // }

    //Printing the array
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"  ";
        }
    }



}