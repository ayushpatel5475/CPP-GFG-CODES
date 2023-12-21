#include <iostream>
using namespace std;
int main(){

pair <int, int> p1(10,20),p3(1,2), p4(6,9);;
pair <int, string> p2 (10,"ayush");


cout<<p1.first<<" "<<p1.second<<"\n";
cout<<p2.first<<" "<<p2.second<<"\n";

//comparision of PAIRs

cout<<(p3==p4)<<" "<<(p3!=p4)<<" "<<(p3<p4)<<" "<<(p3>p4)<<" ";

}