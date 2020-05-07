#include <iostream>
using namespace std;
int tests=0,counter=-1,result=0;


main()
{
    cin >> tests;
    string number[tests];
    string temp[tests];
    for (int i=0;i<tests;i++)
        {
            cin >> number[i];

              temp[i]="0";
              while(true)
                  {
                        counter++;
                        result=stoi(number[i]) + stoi(temp[i]);
                        number[i]= to_string(result);
                        temp[i]="";

                        for (int j=0;number[i].size()>j;j++)
                            {
                                temp[i].push_back(number[i][(number[i].size()-1)-j]);
                            }

                         if (number[i]==temp[i])
                            {
                                cout << number[i] <<" " <<counter<<endl;
                                counter=-1;
                                break;
                            }
                    }
        }
}

