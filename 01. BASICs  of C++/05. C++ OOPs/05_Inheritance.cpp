#include <iostream>
using namespace std;

class Person{ //parent class
    protected:
        string name;
        int id;
};

class Student : public Person{  //child class, if we use protected here, so everything of parent class will become protected.
    private:
         int marks;
    public : 
        void print(){ 
            cout<<name<<" "<<id<<" "<<marks<<endl;
            //Note that name and id is also used here.
        }
};
int main(){
    
  

    return 0;

}