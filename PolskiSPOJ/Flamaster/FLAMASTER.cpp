#include <iostream>

using namespace std;

int ilosc;
int counter=1;
string tab[50];

int main()
{
    cin >> ilosc;
    string wynik[ilosc];
    for (int i=0;i<ilosc;i++)
    {
       cin >> tab[i];
    }
    char wyraz[200];
    for (int j=0;j<ilosc;j++)
    {

            cout << endl;
              for(int x=0; tab[j].length()>x; x++)
                   {
                        if (tab[j][x]==tab[j][x+1])
                        {
                            if (counter==1)
                            {
                            cout << tab[j][x];
                            counter++;
                            }
                            else if (counter==2)
                            {
                                counter++;
                                continue;
                            }
                            else
                            {
                                 counter++;
                            }
                        }
                       else if (tab[j][x]!=tab[j][x+1])
                        {

                            if (counter<2)
                            {
                            cout << tab[j][x];
                            }

                            if (counter>2)
                            {
                            cout << counter;
                            }
                            else if (counter==2)
                            {
                               cout << tab[j][x];
                            }

                            counter=1;
                        }
                   }
    }

}
