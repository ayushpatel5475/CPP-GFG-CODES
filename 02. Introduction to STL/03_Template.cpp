#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
T mymax (T x, T y){
    return (x>y) ? x: y;
}


/*
MACROS:

#mymax(x,y) ((x>y)?x:y)

this is applicable only for int data type
*/


int main(){
    cout<< mymax<int>(3,7)<<endl;
    cout<< mymax<char>('a','y')<<endl;
return 0;

}