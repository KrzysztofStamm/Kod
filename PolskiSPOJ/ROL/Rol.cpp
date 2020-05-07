#include <iostream>

using namespace std;

int tests=0,amountOfNumbers=0;

main()
{
    cin >> tests;
    for (int i=0;i<tests;i++)
    {
        cin >> amountOfNumbers;
        int tab[amountOfNumbers];
        int tabResult[amountOfNumbers];
        for (int j=0;j<amountOfNumbers;j++)
        {
            cin>> tab[j];

        }
         for (int j=0;j<amountOfNumbers;j++)
        {
            if (j+2<=amountOfNumbers)
            {
                tabResult[j]=tab[j+1];
            }
            else
            {

                tabResult[j]=tab[0];
            }

        }

         for (int z=0;z<amountOfNumbers;z++)
        {
            cout << tabResult[z]<<" ";
        }
                cout << endl;

    }

}
