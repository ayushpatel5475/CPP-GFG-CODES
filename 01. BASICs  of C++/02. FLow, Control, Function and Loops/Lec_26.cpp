#include <iostream>
using namespace std;
main()
{
    {
        //  **********
        for (int i = 1; i <= 10; i++)
        {
            cout << "*";
        }
    }cout<<"\n\n";
    {
        /*
         *
         *
         *
         *
         *
         *
         *
         *
         */
        for (int i = 1; i <= 10; i++)
        {
            cout << "*"
                 << "\n";
        }
    }cout<<"\n\n";
    {
        /*
        *******
        *******
        *******
        *******
        *******
        */

        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }cout<<"\n\n";
    {
        /*
        12345
        12345
        12345
        12345
        12345
        */
       for(int i =1;i<=5;i++)
       {
        for(int j=1;j<=5;j++)
        {
            cout<<j;

        }
        cout<<"\n";
       }
    }
    cout<<"\n\n";
    {
        /*
        11111
        22222
        33333
        44444
        55555
        */
       for(int i =1;i<=5;i++)
       {
        for(int j=1;j<=5;j++)
        {
            cout<<i;

        }
        cout<<"\n";
       }
    }

    return 0;
}