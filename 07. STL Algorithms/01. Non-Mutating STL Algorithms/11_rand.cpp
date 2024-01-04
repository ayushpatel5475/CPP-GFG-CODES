#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator with the current time
    srand(time(0)); // if this is not used then program will generate same random numbers each time

    for (int i = 0; i < 5; i++)
    {
        cout << rand() << " ";
    }

    cout << "\n";
    // for generating random number in a range  ( eg, 0 to 99)
    for (int i = 0; i < 5; i++)
        cout << rand() % 100 << " ";


    cout << "\n";
    //Range: low to high (51 to 99)
    int low =50, high=100;
    int range=high-low+1;
    for ( int i=0;i<5;i++){
        cout<<(rand()%range) +low <<" ";
    }
    return 0;
}
