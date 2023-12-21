#include <iostream>
using namespace std;
//Static data members 
class Player{
    private: 
        static int count;
    
    public:
    Player(){ count++;} 
    ~Player(){ count--;} 
    static int getcount(){return count;}
};
int Player::count=0; //We have to Declare static as GLOBAL variable like this.
int main(){
    
    Player p1,p2;
    cout<<Player::getcount();


    return 0;

}