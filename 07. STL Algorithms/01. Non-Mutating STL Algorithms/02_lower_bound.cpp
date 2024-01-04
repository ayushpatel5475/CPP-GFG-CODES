 #include <iostream>
 #include <algorithm>
 #include <vector>

 using namespace std;

 int main(){
    vector <int> v={10,20,20,30,40};
    auto it =lower_bound(v.begin(), v.end(), 20);
    cout<<(*it)<<endl;
    it=lower_bound(v.begin(), v.end(), 25);
    cout<<(*it)<<endl;

  

    return 0;
 }