#include <iostream>
using namespace std;

struct student{
    int rollno;
    string name;
    string address;
    int age;
    string section;

};
/*
void print(student s)  //here we have used nothing which is causing less Performance
{
    cout<< x.rollno<<" "<<x.name<<" "<<x.address<<" "<<x.age<<" "<<x.section<<" ";
}
*/

/*
void print(student &x)  //here we have used reference to improve Performance
{
    cout<< x.rollno<<" "<<x.name<<" "<<x.address<<" "<<x.age<<" "<<x.section<<" ";
}


*/

void print(student *x)  //here we have used Pointer to improve Performance (NOTE that we have used -> instead of .)
{
    cout<< x->rollno<<" "<<x->name<<" "<<x->address<<" "<<x->age<<" "<<x->section<<" ";
}

int main(){


    student s;  //in C we have write struct student s;
    s.rollno=22;
    s.name="ayush";
    s.address="adi nagar, bachharawanm Raebareli";
    s.age=22;
    s.section="CSE";
    
    print(&s);  //in case of  pointer use &s other normal or refernce only s 
    return 0;
}