// in case of struct the childs are by default Public so there is no issue in this. 

#include <iostream>
using namespace std;
class student{
    public:  //in class we must have to use public else it will cause compiler error, since these are Private  
    int rollno;
    string name;
    string address;
};


int main() 
{
    student s={22,"ayush","Raebareli"};
    cout<<s.rollno<<" "<<s.name<<" "<<s.address;

    return 0;
}
