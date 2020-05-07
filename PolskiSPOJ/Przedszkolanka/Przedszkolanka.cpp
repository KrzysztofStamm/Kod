#include <iostream>

using namespace std;

int main()
{
    int tests=0,group1=0,group2=0,temp1=0,temp2=0;
    int result=0,NWD=0,NWW=0;
    cin >> tests;
    for (int i=0;i<tests;i++)
    {
        cin >> group1 >>group2;
        temp1=group1;
        temp2=group2;
        if(group1==group2)
        {
            cout << group1<<endl;
        }
        else
        {
             while (group2>0)
            {

                result=group1%group2;
                group1=group2;
                group2=result;
                if (group2!=0)
                NWD=group2; //NWD
            }
            NWW=(temp1*temp2)/NWD;
            cout << NWW<<endl;
        }
    }
}
