#include <iostream>
#include <map>
#include <windows.h>
#include <conio.h>


using namespace std;

int main()
{
    float cash=0,number=0,amount=0;
    char decision='n';
    map < int, float > price;
    //domyslnie nazwy kaw powinny byc na automacie a nie w oprogramowaniu
    //domyslnie jest ograniczenie sprzetowe przeciwko wprowadzeniu liter znakow itp
    price[1]=3;         //kawa
    price[2]=2;      //herbata
    price[3]=1.5;  //czekolada
    while(decision!='y')
    {

    printf("Ilosc kredytow %.2f\n\n",amount);
    credits:
    cout << "Wprowadz Kredyty"<<endl;
    cin >> cash;
    amount+=cash;
    choice:
    cout << "Wybierz Napoj"<<endl;
    cin >> number;
    if (number>3)
    {
        system("cls");
        printf("Ilosc kredytow %.2f\n\n",amount);
        cout << "Wybrano nieprawidlowy numer\nDostepne numery to 1-3\n\n";
        goto choice;
    }

    if (amount>=price[number])
    {
        system("cls");
        cout << "Przygotowanie Napoju\n     ";
        for (int i=0;i<10;i++)
        {
            Sleep(300);
            cout<<(char)219;
        }
        cout << endl;
        Sleep(500);
        system("cls");
        amount=amount-price[number];
        printf("Zwrocona reszta: %.2f \n\nSmacznego!\n",amount);
        break;
    }
    else
    {
        system("cls");
       cout << "Za malo kredytow by zakupic ten napoj"<<endl;
       printf( "Ilosc kredytow: %f \n\n",amount);

       cout << "Czy chcesz wybrac inny napoj? Y/N"<<endl;
       cin >> decision;
       decision = tolower(decision);
       if(decision=='y')
       {
          goto choice;
       }
        system("cls");
        printf( "Ilosc kredytow: %.2f \n\n",amount);

       cout << "Zwrocic kredyty? Y/N"<<endl;
       cin >> decision;
       decision = tolower(decision);
       system("cls");

       if(decision=='y')
       {
          cout << "Kredyty zwrocone pomyslnie \n";
       }
    }
    }
}
