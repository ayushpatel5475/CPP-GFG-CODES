 #include <iostream>
 #include <algorithm>
 #include <vector>

 using namespace std;

 int main(){
    vector <int> v={10,20,20,30,40};
    auto it =upper_bound(v.begin(), v.end(), 20);
    cout<<(*it)<<endl;
    it=upper_bound(v.begin(), v.end(), 30);
    cout<<(*it)<<endl;

  
//for getting position : (it-v.begin())
    return 0;
 }