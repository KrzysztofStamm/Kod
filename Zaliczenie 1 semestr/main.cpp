#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <time.h>
#include <bits/stdc++.h>

using namespace std;




HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
COORD place;
CONSOLE_SCREEN_BUFFER_INFO info;

int menuSizeDown=9, y=6, active = 0, placeXMenu = 6,activeMenu=0,windowsizeX = 39;
fstream check;
fstream klienci;
string movie,login,haslo,activeMovie,tytul,line,loggedPerson,activeMovieReturn;

BOOL running = TRUE;
bool zalogowano = false,status= true;




void movieTitle();
void setPosition(int,int);
void logo();
void frame();
void caseMenuPart(string);
void goBack();
void mainMenu();
void loggedInMenu();
void clearMenu();
void showMovies();
void logInMenu();
void registerMenu();
void showMoviesLogged();
void adminMainPanel();
void arrowSetter();
void set_window_size();
void remove_scrollbar();
void cursorVisibleFalse();
void loggedInRentMenu();
void textCenter (int, string);
void delete_line(const char *file_name, int n);
void showDescription();
void rentMovie();
void returnMovieMenu();
void returnMovie();






int main()
{

system("Color 06");
cursorVisibleFalse();
set_window_size();
mainMenu();
frame();

while(running)
    {
        system("pause>nul");

if(GetAsyncKeyState(VK_ESCAPE) == FALSE)
        {



        if(GetAsyncKeyState(VK_DOWN))
            {
                if(y!= menuSizeDown)
                {

                    setPosition(3,y);cout<<"  ";
                    y++;
                    setPosition(3,y);cout<<"->";
                    active++;
                    switch(active)
                    {
                        case 0:
                        {
                            activeMovieReturn="Titanic";
                            break;
                        }
                        case 1:
                        {
                            activeMovieReturn="Mayday";
                            break;
                        }
                        case 2:
                        {
                            activeMovieReturn="Shrek";
                            break;
                        }
                        case 3:
                        {
                            activeMovieReturn="Urwis";
                            break;
                        }
                        case 4:
                        {
                            activeMovieReturn="Psy_3";
                            break;
                        }

                    }
                    continue;
                }
                else
                {
                    continue;
                }
            }
        if(GetAsyncKeyState(VK_UP))
            {
                if(y != 6)
                {
                    setPosition(3,y);cout<<"  ";
                    y--;
                    setPosition(3,y);cout<<"->";
                    active--;
                    setPosition(15,15);cout<<active<<"     "<<activeMenu<< "   "<<y;
                    switch(active)
                    {
                        case 0:
                        {
                            activeMovieReturn="Titanic";
                            break;
                        }
                        case 1:
                        {
                            activeMovieReturn="Mayday";
                            break;
                        }
                        case 2:
                        {
                            activeMovieReturn="Shrek";
                            break;
                        }
                        case 3:
                        {
                            activeMovieReturn="Urwis";
                            break;
                        }
                        case 4:
                        {
                            activeMovieReturn="Psy_3";
                            break;
                        }
                    }
                    continue;

                }

                else
                {
                    continue;
                }
            }
         if(GetAsyncKeyState(VK_RETURN))
         {
                switch(active)
                    {
                     case 0:
                         {
                            if (activeMenu==0)
                            {
                                showMovies();
                                break;
                            }
                            else if (activeMenu==1)
                            {
                                activeMovie="Titanic";
                                showDescription();
                                break;
                            }
                            else if (activeMenu==20)
                            {
                                showMoviesLogged();
                                break;
                            }
                            else if (activeMenu==21)
                            {
                                activeMovie="Titanic";
                                loggedInRentMenu();
                                break;
                            }
                            else if (activeMenu==211)
                            {
                                showDescription();
                                break;
                            }
                             else if (activeMenu==212)
                            {
                                returnMovie();
                                loggedInMenu();
                                break;
                            }
                         }

                     case 1:
                        {
                        	if (activeMenu==0)
                                {
                                    logInMenu();
                                    break;
                                }
                            else if (activeMenu==1)
                                {
                                    activeMovie="Mayday";
                                    showDescription();
                                    break;
                                }

                            else if (activeMenu==20)
                                {
                                    returnMovieMenu();
                                    break;
                                }
                            else if (activeMenu==21)
                                {
                                    activeMovie="Mayday";
                                    loggedInRentMenu();
                                    break;
                                }
                            else if (activeMenu==211)
                                {
                                    rentMovie();
                                    break;
                                }
                            else if (activeMenu==212)
                                {
                                    returnMovie();
                                    break;
                                }
        				}

                	case 2:
                        {
                            if (activeMenu==0)
                                {
                                     registerMenu();
                                     break;
                                }
                            else if (activeMenu==20)
                                 {
                                     mainMenu();
                                     break;
                                 }
                            else if (activeMenu==1)
                                {
                                    activeMovie="Shrek";
                                    showDescription();
                                    break;
                                }
                            else if (activeMenu==21)
                                {
                                    activeMovie="Shrek";
                                    loggedInRentMenu();
                                    break;
                                }
                            else if (activeMenu==212)
                                {
                                    returnMovie();
                                    break;
                                }
                        }

                     case 3:
                        {
                            if (activeMenu==0)
                                {
                                    clearMenu();
                                    setPosition(3,y);cout<<"  ";
                                    setPosition(11,19); cout << "Zamknieto Program";
                                    running = FALSE;
                                    break;
                                }
                            else if (activeMenu==1)
                                {
                                    activeMovie="Urwis";
                                    showDescription();
                                    break;
                                }
                            else if (activeMenu==21)
                                {
                                    activeMovie="Urwis";
                                    loggedInRentMenu();
                                    break;
                                }
                            else if (activeMenu==212)
                                {
                                    returnMovie();
                                    break;
                                }
                        }

                    case 4:
                        {
                            if (activeMenu==1)
                                {
                                    activeMovie="Psy_3";
                                    showDescription();
                                    break;
                                }
                            else if (activeMenu==21)
                                {
                                    activeMovie="Psy_3";
                                    loggedInRentMenu();
                                    break;
                                }
                            else if (activeMenu==212)
                                {
                                    returnMovie();
                                    break;
                                }
                            else
                                {
                                    continue;
                                }
                        }
                    }
        }
        }

else
        {
            goBack();
        }
    }
_Exit(0);
}

void setPosition(int x, int y)
{
    place.X = x;
    place.Y = y;
    SetConsoleCursorPosition(handle,place);
}

void clearMenu()
{
        system("cls");
        logo();
        frame();
        arrowSetter();
}

void goBack()
{
    if (activeMenu >=1)
    {
        switch(activeMenu)
        {
        case 1:
            {
            mainMenu();
            break;
            }
        case 2:
            {
                mainMenu();
                break;
            }
        case 3:
            {
                mainMenu();
                break;
            }
        case 20:
            {
                mainMenu();
                break;
            }

        case 21:
            {
                loggedInMenu();
                break;
            }
        case 211:
            {
                if(!zalogowano)
                {
                    showMovies();
                    break;
                }
                else
                {
                    showMoviesLogged();
                    break;
                }
            }
        case 212:
            {
                loggedInMenu();
                break;
            }
        case 2112:
            {
                if(!zalogowano)
                {
                    showMovies();
                    break;
                }
                else
                {
                    loggedInRentMenu();
                    break;
                }
            }
        case 2111:
            {
                loggedInRentMenu();
                break;
            }
        }
    }
}

void mainMenu()
{
        clearMenu();
        activeMenu=0;
        menuSizeDown=9;
        setPosition(2,2); textCenter(windowsizeX,"Wypozyczalnia filmow!");
        setPosition(placeXMenu,6); cout << "Lista filmow"<<endl;
        setPosition(placeXMenu,7); cout << "Zaloguj"<<endl;
        setPosition(placeXMenu,8); cout << "Zarejestruj"<<endl;
        setPosition(placeXMenu,9); cout << "Wyjscie"<<endl;
}

void logo()
{
        setPosition(0,0);  cout << "#########################################";
        setPosition(0,1); cout << "##"; setPosition(39,1); cout << "##";
        setPosition(0,2); cout << "##";
        setPosition(39,2); cout << "##";
        setPosition(0,3); cout << "##"; setPosition(39,3); cout << "##";
        setPosition(0,4);  cout << "#########################################";
}

void loggedInMenu()
{
        activeMenu=20;
        clearMenu();
        menuSizeDown=8;
        setPosition(2,2); textCenter(windowsizeX,"Wypozyczalnia filmow!");
        setPosition(placeXMenu,6); cout << "Lista filmow"<<endl;
        setPosition(placeXMenu,7); cout << "Oddaj film"<<endl;
        setPosition(placeXMenu,8); cout << "Wyloguj"<<endl;
        setPosition(placeXMenu,6);
}

void showMovies()
{
        fstream title;
        activeMenu = 1;
        y=6;
        int x = 6,z = 1;
        menuSizeDown=10;
        clearMenu();
        setPosition(2,2); textCenter(windowsizeX,"Lista filmow");
        title.open("tytuly.txt", ios::in);
        while (!title.eof())
        {
            setPosition(placeXMenu,x);
            getline(title, movie);
            cout <<z<<". "<< movie << endl;
            x++;
            z++;
        }
        title.close();
}

void showMoviesLogged()
{
        activeMenu = 21;
        y=6;
        int x=6,z = 1;
        menuSizeDown=10;
        clearMenu();
        setPosition(2,2); textCenter(windowsizeX,"Lista filmow");
        fstream title;
        title.open("tytuly.txt", ios::in);
        while (!title.eof())
        {
            setPosition(placeXMenu,x);
            getline(title, movie);
            cout <<z<<". "<< movie << endl;
            x++;
            z++;
        }
        title.close();
}

void logInMenu()
{
		string login, password, login2, password2;
		fstream text;
		text.open("dane.txt", ios::in);
        char chP, chL;
        int range,z=0;
		activeMenu = 2;
        clearMenu();
        setPosition(2,2); textCenter(windowsizeX,"Witaj w formularzu Logowania!");
        setPosition(3,6);  cout << "  ";
        setPosition(3,7);  cout << "->";
        setPosition(placeXMenu,7);
        cout << "Login: ";
        chL=0;

        while(chL !=13)
        {
            chL = getch();
            if (chL!=27)
            {
                if (chL!=8)
                {

                    login.push_back(chL);
                    setPosition(14,7);cout << "                    ";
                    setPosition(14,7);cout << login;
                }
                else if (chL == 8)
                {
                    if (login.size()+13>13)
                        {
                            login.erase(login.size()-1,1);
                            setPosition(14,7);cout << "                    ";
                            setPosition(14,7);cout << login;
                            continue;
                        }
                    else
                        {
                                setPosition(14,7);
                                continue;
                        }
                }

            }
            else
                {
                    goBack();
                    break;
                }
        }
            if ((login.size()<=1) && (activeMenu ==2))
                {
                    setPosition(2,19); textCenter(windowsizeX,"prosze o wpisanie loginu");
                    Sleep(2 * CLOCKS_PER_SEC);
                    logInMenu();
                }

            if (login.size()>0) //to sprawia ¿e usuwany jest znak ascii entera z loginu dzieki temu to wgl dzia³a
                {
                    login.erase(login.size()-1,1);
                }
            if (activeMenu == 2)
                {
                    setPosition(3,7);  cout << "  ";
                    setPosition(3,8);  cout << "->";
                    setPosition(placeXMenu,8);  cout << "Haslo: ";
                    while(chP !=13)
                        {
                            chP = getch();
                            if (chP!=27)
                                {
                                    if (chP!=8)
                                        {
                                            password.push_back(chP);
                                            for (int i=1; i<=password.size(); i++)
                                                {
                                                    setPosition(i+13,8);
                                                    cout << '*';
                                                }

                                        }
                                    else if (chP == 8)
                                        {
                                            if (password.size()+13>13)
                                                {
                                                    password.erase(password.size()-1,1);
                                                    setPosition(password.size()+14,8);cout << ' ';
                                                    continue;
                                                }
                                            else
                                                {
                                                    setPosition(14,8);
                                                    continue;
                                                }
                                        }
                                }
                                else
                                {
                                    goBack();
                                    break;
                                }
                        }
                    if (password.size()<=1 && (activeMenu ==2))
                        {
                            setPosition(2,19); textCenter(windowsizeX,"prosze o wpisanie hasla");
                            Sleep(2 * CLOCKS_PER_SEC);
                            logInMenu();
                        }
                    if (password.size()>0)
                        {
                        // to sprawia ¿e usuwany jest znak ascii entera z loginu dzieki temu to wgl dzia³a
                        password.erase(password.size()-1,1);
                        }
             }
            while(!text.eof())
                {
                    text >> login2 >> password2;
                    if( (login==login2) && (password==password2) )
                        {
                            menuSizeDown=8;
                            loggedInMenu();
                            zalogowano=true;
                            loggedPerson=login;
                            text.close();
                            break;
                        }
                }
            if(!zalogowano)
                {
                clearMenu();
                setPosition(3,y);cout<<"  ";//czysci strzaleczke
                setPosition(2,2); textCenter(windowsizeX,"Witaj w formularzu Logowania!");
                setPosition(2,18); textCenter(windowsizeX,"Bledne haslo lub login");
                setPosition(2,19); textCenter(windowsizeX,"sproboj ponownie");
                text.close();
                Sleep(2 * CLOCKS_PER_SEC);
                logInMenu();
                }
        }


void registerMenu()
{
        activeMenu=3;
        clearMenu();
        setPosition(3,6);  cout << "  ";
        setPosition(3,7);  cout << "->";
        char chP, chL;
        chP=0;
        chL=0;
        bool finds = false;
        bool zarejstrowano = false;
        string login, password, login2, password2,linia;
        fstream plik;

        setPosition(2,2);textCenter(windowsizeX,"Witaj w formularzu rejestracji!");
        setPosition(placeXMenu,7);cout << "Login: ";
        while(chL !=13)
            {
                chL = getch();
                if (chL!=27)
                    {
                        if (chL!=8)
                            {
                                login2.push_back(chL);
                                setPosition(14,7);cout << "                    ";
                                setPosition(14,7);cout << login2;
                            }
                        else if (chL == 8)
                            {
                                if (login2.size()+13>13)
                                    {
                                        login2.erase(login2.size()-1,1);
                                        setPosition(14,7);cout << "                    ";
                                        setPosition(14,7);cout << login2;
                                        continue;
                                    }
                                else
                                    {
                                        setPosition(14,7);
                                        continue;
                                    }
                            }
                    }

                else
                    {
                        goBack();
                        break;
                    }
            }
                if (login2.size()<=1 && (activeMenu ==3))
                    {
                        setPosition(2,19);textCenter(windowsizeX,"prsze o wpisanie loginu");
                        Sleep(2 * CLOCKS_PER_SEC);
                        registerMenu();
                    }
                if (login2.size()>0)
                    {
                        login2.erase(login2.size()-1,1);
                    }

                        plik.open("dane.txt", ios::in);
                        while(!plik.eof())
                            {
                                if(finds != true)
                                    {
                                        while(!plik.eof())
                                            {
                                                getline(plik, linia);
                                                if(!(string::npos == linia.find(login2)) && (login2.size()>0))
                                                    {
                                                        setPosition(2,19);textCenter(windowsizeX,"Ten login jest juz zajety");
                                                        finds=true;
                                                        Sleep(2 * CLOCKS_PER_SEC);
                                                        registerMenu();
                                                    }
                                            }
                                        if (string::npos == linia.find(login2))
                                            {
                                                if (activeMenu==3)
                                                    {
                                                        setPosition(3,7);  cout << "  ";
                                                        setPosition(3,8);  cout << "->";
                                                        setPosition(placeXMenu,8);  cout << "Haslo: ";
                                                        while(chP !=13)
                                                            {
                                                                chP = getch();
                                                                if (chP!=27)
                                                                    {
                                                                        if (chP!=8)
                                                                            {
                                                                                password2.push_back(chP);
                                                                                for (int i=1; i<=password2.size(); i++)
                                                                                    {
                                                                                       setPosition(i+13,8);
                                                                                       cout << '*';
                                                                                     }
                                                                            }
                                                                        else if (chP == 8)
                                                                            {
                                                                                if (password2.size()+13>13)
                                                                                    {
                                                                                        password2.erase(password2.size()-1,1);
                                                                                        setPosition(password2.size()+14,8);cout << ' ';
                                                                                        continue;
                                                                                    }
                                                                                else
                                                                                    {
                                                                                            setPosition(14,8);
                                                                                            continue;
                                                                                    }



                                                                            }

                                                                    }
                                                                else
                                                                    {
                                                                        goBack();
                                                                        break;
                                                                    }
                                                            }
                                                        if (password2.size()<=1 && (activeMenu ==3))
                                                            {
                                                                setPosition(2,19);textCenter(windowsizeX,"Nie wpisano prawidlowego hasla");
                                                                Sleep(2 * CLOCKS_PER_SEC);
                                                                registerMenu();
                                                            }
                                                        if (password2.size()>0)
                                                            {
                                                                password2.erase(password2.size()-1,1);
                                                            }
                                                        else
                                                            {
                                                                mainMenu();
                                                            }
                                                    }
                                                if (activeMenu==3)
                                                    {
                                                        setPosition(2,18);textCenter(windowsizeX,"Udalo sie zarejestrowac jako");
                                                        setPosition(2,19);textCenter(windowsizeX,login2);
                                                        fstream text,client;
                                                        text.open("dane.txt", ios::out | ios::app);
                                                        text << login2 << endl;
                                                        text << password2 << endl << endl;
                                                        text.close();
                                                        string folder="klienci";
                                                        login2 += ".txt";
                                                        string sciezka=folder+"/"+login2;
                                                        client.open(sciezka.c_str(),ios::app);//albo ios::in
                                                        client << '\n';
                                                        client.close();
                                                        Sleep(2 * CLOCKS_PER_SEC);
                                                        mainMenu();
                                                        zarejstrowano = true;
                                                    }
                                            }

                                    }


                            }
plik.close();
}

void frame()
{

    for (int i=0; i<=22;i++)
    {
        setPosition(0,i);cout << "##";
        setPosition(39,i);cout << "##";
    }
    setPosition(0,22);  cout << "#######################################";
    setPosition(0,16);  cout << "#######################################";
}

void adminMainPanel()
{
        clearMenu();
        activeMenu=-1;
        menuSizeDown=9;
        setPosition(placeXMenu,6); cout << "Dodaj film"<<endl;
        setPosition(placeXMenu,7); cout << "Usuñ film"<<endl;
        setPosition(placeXMenu,8); cout << "Wszystkie filmy"<<endl;
        setPosition(placeXMenu,9); cout << "Wyjscie"<<endl;
}
void arrowSetter()
{
        y=6;
        active=0;
        setPosition(3,y);cout<<"->";
}
void movieTitle()
{
        string film;
        int x=active;
        fstream titles;
        titles.open("film.txt", ios::in);
        for (int i=0; i<x; i++)
            {
                getline(titles, film);
            }
        setPosition(9,18);cout << film;
}

void set_window_size()
{
SMALL_RECT sr;
sr.Left = 0;
sr.Top = 0;
sr.Right = 41;
sr.Bottom = 22;
SetConsoleWindowInfo(handle,true,&sr);
}

void remove_scrollbar()
{
    GetConsoleScreenBufferInfo(handle, &info);
    COORD new_size =
    {
        info.srWindow.Right - info.srWindow.Left + 1,
        info.srWindow.Bottom - info.srWindow.Top + 1
    };
    SetConsoleScreenBufferSize(handle, new_size);
}

void cursorVisibleFalse()
{
    CONSOLE_CURSOR_INFO Cursor;
    Cursor.dwSize = sizeof(CONSOLE_CURSOR_INFO);
    Cursor.bVisible = false;
    SetConsoleCursorInfo(handle, &Cursor);
}
void loggedInRentMenu()
{
         clearMenu();
         setPosition(2,2);textCenter(windowsizeX,activeMovie);
         activeMenu=211;
         menuSizeDown=7;
         setPosition(placeXMenu,6); cout << "Wyswietl Opis"<<endl;
         setPosition(placeXMenu,7); cout << "Wypozycz film"<<endl;
}

void rentMovie()
{
    status=true;
    clearMenu();
    activeMenu=2112;
    menuSizeDown=6;
    setPosition(3,y);cout<<"  ";
	string strReplace = "[" + activeMovie + "]Wolny";
    string strNew = "[" + activeMovie + "]Wypozyczony";
    ifstream filein("status.txt");
    ofstream fileout("Lista2.txt");
    if(!filein || !fileout)
	{
        cout << "Error opening files!" << endl;
    }
    string strTemp;
    bool found = false;
 	while(filein >> strTemp)
    {
        if(strTemp == strReplace)
		{
            strTemp = strNew;
            found = true;
        }
        strTemp += "\n";
        fileout << endl;
		fileout << strTemp;
    }
    if(found == true)
    {
    	fileout.close();
		filein.close();
		remove("status.txt");
		rename("Lista2.txt", "status.txt");
		string text, line, wybor;
    	string login = loggedPerson;
		string folder="klienci";
    	login += ".txt";
    	string sciezka=folder+"/"+login;
    	klienci.open(sciezka.c_str(), ios::in | ios::app);// | ios::out);
		klienci << activeMovie << '\n';
    	klienci.close();
    	setPosition(2,19); textCenter(windowsizeX,"Udalo sie wypozyczyc!");
    	Sleep(2* CLOCKS_PER_SEC);
        showMoviesLogged();
	}
	else
	{
    	setPosition(2,19); textCenter(windowsizeX,"Przykro mi! Film zajety!");
    	Sleep(2* CLOCKS_PER_SEC);
        showMoviesLogged();
		fileout.close();
		filein.close();
	}


}

void showDescription()
{
    clearMenu();
    setPosition(2,2);
    textCenter(windowsizeX,activeMovie);
    activeMenu=2112;
    menuSizeDown=6;
    setPosition(3,y);cout<<"  ";
	ifstream plik_dane;
    plik_dane.open( "opisy.txt", ios::out | ios::in );
    string tekst;
    do {
        getline( plik_dane, tekst );
        if( tekst.find( activeMovie ) != std::string::npos )
        {
            for( int i = 0; i < 6; i++ )
            {
                getline( plik_dane, tekst );
                cout << "\t" << tekst << endl;
            }
            return;
        }
        } while( !plik_dane.eof() );
    plik_dane.close();
}

void returnMovieMenu()
{
    activeMovieReturn= "Titanic";
    int k=6;
    int x=6,z = 1,m=6;
    clearMenu();
    setPosition(2,2); textCenter(windowsizeX,"Lista wypozyczonych filmow");
    activeMenu=212;
    menuSizeDown=13;
    fstream returnFst;
    int moviesLength =0;
    string login = loggedPerson;
    string nazwaPliku = login += ".txt";
    string folder="klienci";
    string sciezka=folder+"/"+login;
    returnFst.open(sciezka.c_str(),ios::out | ios::in);
    string tekst, movies;
    getline( returnFst, tekst );
    fstream title;
    title.open(sciezka.c_str(), ios::in);
    getline(title,movie);

    while (!title.eof())
    {
        setPosition(24,m);
        getline(title, movie);
        setPosition(23,m); textCenter(17,movie);
        m++;
    }
    title.close();
    title.open("tytuly.txt", ios::in);

    while (!title.eof())
    {
        setPosition(placeXMenu,x);
        getline(title, movie);
        cout <<z<<". "<< movie << endl;
        x++;
        z++;
    }
    title.close();

    for (int i=17; i>=5;i--)
    {
        setPosition(20,i);cout << "##";
    }
    setPosition(2,17); textCenter(windowsizeX,"                 ##                ");
    setPosition(2,18); textCenter(windowsizeX,"^^^ Lista filmow ## Twoje filmy ^^^");
    setPosition(2,19); textCenter(windowsizeX,"|||              ##             |||");
    setPosition(2,20); textCenter(windowsizeX,"|||              ##             |||");
    setPosition(2,21); textCenter(windowsizeX,"                 ##                ");
    returnFst.close();
}
void delete_line(const char *file_name, int n)
{

    ifstream is(file_name);
    ofstream ofs;
    ofs.open("temp.txt", ofstream::out);
    char c;
    int line_no = 1;
    while (is.get(c))
    {
        if (c == '\n')
            line_no++;
        if (line_no != n)
            ofs << c;
    }
    ofs.close();
    is.close();
    remove(file_name);
    rename("temp.txt", file_name);
}

void textCenter (int windowsizeX, string text)
{
    int textSize = text.length();
    if (text.length() < windowsizeX)
    {
        for (int i=1; i<(windowsizeX-textSize)/2;i++)
        {
            cout << ' ';
        }
        cout << text;
        for (int i=1; i<(windowsizeX-textSize)/2;i++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
void returnMovie()
{
    status = true;
    string kappa;
    int p=1;
    ifstream myfile_in ("status.txt");
    string login = loggedPerson;
    string nazwaPliku = login += ".txt";
	string folder="klienci";
    string sciezka=folder+"/"+nazwaPliku;
    fstream zmienna;
    zmienna.open(sciezka.c_str(),ios::out | ios::in);
    getline(zmienna,kappa);
    while (!zmienna.eof())
    {
        p++;
        getline(zmienna,kappa);
        if (kappa == activeMovieReturn)
        {
            clearMenu();
            setPosition(2,19);textCenter (windowsizeX, "Udalo sie - oddany!");
            setPosition(3,y);cout<<"  ";
            Sleep(2* CLOCKS_PER_SEC);
            loggedInMenu();
            zmienna.close();
            delete_line(sciezka.c_str(),p);
            myfile_in.close();
            string strReplace = "[" + activeMovieReturn + "]Wolny";
            string strNew = "[" + activeMovieReturn + "]Wypozyczony";
            ifstream filein("status.txt");
            ofstream fileout("Lista2.txt");
            if(!filein || !fileout)
            {
                cout << "Bkad podczas otwierania pliku!" << endl;
            }
            string strTemp;
            while(filein >> strTemp)
            {
            if(strTemp == strNew)
            {
                strTemp = strReplace;
            }
            strTemp += "\n";
            fileout << endl;
            fileout << strTemp;
            }
            fileout.close();
            filein.close();
            remove("status.txt");
            rename("Lista2.txt", "status.txt");
            loggedInMenu();
            break;
       }
       else
       {
        continue;
       }
    setPosition(2,19);textCenter (windowsizeX, "Nie wypozyczyles tego filmu");
    }
    zmienna.close();
}

