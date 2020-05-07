#include <iostream>

using namespace std;

int main()
{
    long game=0,chipP1=0,chipP2=0,nwd=0,nwdResult=0;
    cin >> game;
    for (int i=0; i<game;i++)
    {
        cin >> chipP1 >> chipP2;
        if (chipP1==chipP2)
        {
            cout << chipP1+chipP2<<endl;
        }
        else
        {
        while(chipP1!=chipP2)
        {
            while (chipP2>0)
                {
                    nwd=chipP1%chipP2;//liczba a modulo liczba b
                    chipP1=chipP2;// przypisanie liczbie a wartosci liczby b
                    chipP2=nwd;//przypisanie liczbie b wartosci dzia³ania a%b czyli liczby c

                    if (chipP2!=0)
                        {
                            nwdResult=chipP2;
                        }
                }
                break;
        }
        if (nwdResult==0)
        {
            cout << chipP2+chipP1<<endl;
        }
        else
        {
            cout << nwdResult*2<<endl;
        }

        }

    }
}
