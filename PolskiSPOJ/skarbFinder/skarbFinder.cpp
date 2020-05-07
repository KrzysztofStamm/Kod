#include <iostream>
using namespace std;
int tests=0,amountOfHints=0;
int coordinateSystem[1][2]={{0,0}};
main()
{
    cin >>tests;
    for (int i=0;i<tests;i++)
    {
        cin >> amountOfHints;
        if(amountOfHints>0)
        {
        int tabOfDirections[amountOfHints];
        int tabOfSteps[amountOfHints];
        for (int j=0;j<amountOfHints;j++)
        {
                cin >> tabOfDirections[j] >> tabOfSteps[j];
        }
        for (int j=0;j<amountOfHints;j++)
        {
                switch (tabOfDirections[j])
                {
                    case 0:
                    {
                        coordinateSystem[0][1]={coordinateSystem[0][1]+tabOfSteps[j]};
                        break;
                    }
                    case 1:
                    {
                        coordinateSystem[0][1]={coordinateSystem[0][1]-tabOfSteps[j]};
                        break;
                    }
                    case 2:
                    {
                        coordinateSystem[0][0]={coordinateSystem[0][0]-tabOfSteps[j]};
                        break;
                    }
                    case 3:
                    {
                        coordinateSystem[0][0]={coordinateSystem[0][0]+tabOfSteps[j]};
                        break;
                    }
                    default:
                        {
                            break;
                        }
                }
        }
            if ((coordinateSystem[0][0]==0) && (coordinateSystem[0][1]==0))
            {
                cout << "studnia"<<endl;
            }
            else if(coordinateSystem[0][1]>0)
            {
                cout << "0 "<< coordinateSystem[0][1] << endl;

                if(coordinateSystem[0][0]>0)
                {
                    cout << "3 "<< coordinateSystem[0][0]<< endl;
                }
                else if(coordinateSystem[0][0]<0)
                {
                    cout << "2 "<< coordinateSystem[0][0]*(-1)<< endl;
                }
            }
            else if(coordinateSystem[0][1]<0)
            {
                cout << "1 "<< coordinateSystem[0][1] *(-1) << endl;

                if(coordinateSystem[0][0]>0)
                {
                    cout << "3 "<< coordinateSystem[0][0]<<endl;
                }
                else if(coordinateSystem[0][0]<0)
                {
                    cout << "2 "<< coordinateSystem[0][0]*(-1)<<endl;
                }
            }
             else if(coordinateSystem[0][1]==0)
            {
                if(coordinateSystem[0][0]>0)
                {
                    cout << "3 "<< coordinateSystem[0][0]<<endl;
                }
                else if(coordinateSystem[0][0]<0)
                {
                   cout << "2 "<< coordinateSystem[0][0]*(-1)<<endl;
                }
            }
            coordinateSystem[0][0]=0;
            coordinateSystem[0][1]=0;
    }
    }
}
