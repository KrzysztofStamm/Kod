#include <iostream>

using namespace std;

int tests=0,members=0,cookiesPerBox=0,finalCookies=0,amountOfBoxes=0;

main()
{
cin >> tests;
for(int i=0;i<tests;i++)
{
    cin >> members >> cookiesPerBox;
    int eatingTime[members];
    int sum[members];
    int cookies[members];
    int amountOfCookies=0;
    amountOfBoxes=0;
    for(int j=0;j<members;j++)
    {
        amountOfCookies=0;
        amountOfBoxes=0;
        sum[j]=0;
        cookies[j]=0;


        cin >> eatingTime[j];

        while (sum[j]<86400)
        {
               sum[j]+=eatingTime[j];
               if (sum[j]>86400)
               {
                   sum[j]-=eatingTime[j];
                   break;
               }
        }
        amountOfCookies+=(sum[j]/eatingTime[j]);
        cookies[j]=amountOfCookies;
    }
    for (int z=0;z<members;z++)
    {
        finalCookies+=cookies[z];
    }
    if (finalCookies%cookiesPerBox==0)
    {
        cout << finalCookies/cookiesPerBox<<endl;
    }
    else
    {
        cout<<(finalCookies/cookiesPerBox)+1<<endl;
    }
    finalCookies=0;
}
}
