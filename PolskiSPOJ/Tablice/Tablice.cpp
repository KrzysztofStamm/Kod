#include <iostream>

using namespace std;

main()
{
int testy=0;
int n=0;
cin>>testy;
for (int i=0;i<testy;i++)
{
cin >> n;
int tab[n];

    for (int j=0;j<n;j++)
    {
        cin>> tab[j];
    }
    for (int z=n;z>0;z--)
    {
        cout << tab[z-1]<<' ';
    }
    cout << endl;
}
return 0;
}
