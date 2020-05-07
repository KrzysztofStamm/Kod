#include <iostream>

using namespace std;
int ilosc=0;
int testy=0;
int x=0;
int suma=0;
int tablica[100];

int main()
{
    cin >> testy;//"Podaj ilosc testow(0-100):
    while(true)
    {
        if ((testy < 1)||(testy>100))
        {
          cin >> testy;
        }
        else
        {
            break;
        }
    }
    for(int j=0;j<testy;j++)
    {
	cin >> ilosc; //"podaj ilosc liczb do zsumowania: "

	for (int i=0;i<ilosc;i++)
    {
        cin >> x;//podaj ilosc liczb/y odzielonych spacja
        suma+=x;
    }
    tablica[j]=suma;
    suma=0;
    }
    for(int k=0;k<testy;++k)
    {
           cout<<tablica[k]<<endl;
    }
cin.ignore();
cin.get();
return 0;
}
