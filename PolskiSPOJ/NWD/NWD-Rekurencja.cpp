#include <iostream>

using namespace std;

int a,b,c;
int nwd(int a, int b)
{
    if(b!=0) return nwd(b,a%b);

    return a;



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
        cout << nwd(a,b);

    }

}

}
