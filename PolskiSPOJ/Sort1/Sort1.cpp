#include <iostream>
#include <cmath>


using namespace std;
int tests=0,sets=0;

main()
{
    cin >>tests;
    for (int i=0;i<tests;i++)
    {
        cin >> sets;
        string name[sets];
        double x[sets];
        double y[sets];
        double result[sets];
        double temp[sets];

        for (int j=0;j<sets;j++)
        {
            cin >> name[j] >> x[j] >> y[j];
            if (x[j]<0)
            {
                if (y[j]<0)
                {
                    result[j]=hypot(x[j],y[j]*-1);//*-1;
                }
                else
                {
                    //result[j]=(x[j]*-1)+y[j];
                    result[j]=hypot(x[j]*-1,y[j]);
                }
            }
            else if (y[j]<0)
            {
                //result[j]=x[j]+(y[j]*-1);
                result[j]=hypot(x[j],y[j]*-1);;
            }
            else
            {
                //result[j]=x[j]+y[j];
                result[j]=hypot(x[j],y[j]);;
            }
            temp[j]=result[j];
        }
        cout << endl;
//Sortowanie b¹belkowe
          for(int j = 0; j < sets - 1; j++)
          {
                for(int q = 0; q < sets - 1; q++)
                {
                     if(result[q] > result[q + 1])
                     {

                         swap(result[q], result[q + 1]);
                     }

                }

          }

          for (int j=0;j<sets;j++)
          {
              for (int p=0;p<sets;p++)
              {
                  if (result[j]==temp[p])
                    {
                        cout << name[p] << " " << x[p] << " "<< y[p]<<endl;
                        break;
                    }
              }

          }
          cout << endl;

    }
}
