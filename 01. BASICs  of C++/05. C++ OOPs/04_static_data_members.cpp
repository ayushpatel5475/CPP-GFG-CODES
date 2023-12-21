#include <iostream>
using namespace std;
//Static data members
class Player{
    public:
    static int count;
    Player(){ count++;} 
    ~Player(){ count--;} 
    
};
int Player::count=0; //We have to Declare static as GLOBAL variable like this.
int main(){
    
    Player p1;
    cout<<Player::count<<" ";
    Player p2;
    cout<<Player::count<<" ";
    



    return 0;

}