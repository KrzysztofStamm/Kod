#include <iostream>

using namespace std;

int a=0,b=0,c=0,nwdResult=0;
int nwd(int a,int b)
{
    if (a==b)
    {

        return a;
    }
    else
    {
    while (b>0)
    {
    c=a%b;//liczba a modulo liczba b
    a=b;// przypisanie liczbie a wartosci liczby b
    b=c;//przypisanie liczbie b wartosci dzia³ania a%b czyli liczby c
    if (b!=0)
    {
        nwdResult=b;
    }
    }
    return nwdResult;
    }

}



int main()
{
int tests=0;
cin >> tests;
for (int i=0;i<tests;i++)
{
    cin >> a >> b;
    if ((b==0) || (a==0))
        {
            cout << "0" << endl;
        }
    else
    {
        cout << nwd(a,b)<<endl;

    }
}

}
