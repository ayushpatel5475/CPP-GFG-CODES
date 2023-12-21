#include <iostream>
using namespace std;

struct s1{
    char c1;
    char c2;
    double d1;
};

struct s2{
    char c1;
    
    double d1;
    char c2;
};


struct s3{
    char c1;
   
    double d1;
      char c2;
   
}__attribute__((packed)); //used to remove the thing of alignment (make it normal)

int main(){
cout<<sizeof(s1)<<" "<<sizeof(s2)<<" "; //it will give different size due to stucture aligment (see notes )
cout<<sizeof(s3); //This will not give spaces for alignment since used :  _ _attribute_ _((packed)) (but it is not working)
    return 0;
}