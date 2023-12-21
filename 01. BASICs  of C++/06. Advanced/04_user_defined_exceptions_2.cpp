#include <iostream>
#include <exception> //NOTE
using namespace std;

//concept of inheritance in exception class

class MyException: public exception{
    virtual const char * what() const throw(){
        return "excpetion occured ayush\n";
    }

};

int main(){
    try {
        throw MyException();
    }
    catch(exception &e){
        cout<<e.what();
    }
}
