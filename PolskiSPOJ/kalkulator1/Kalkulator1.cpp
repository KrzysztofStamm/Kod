#include <iostream>

using namespace std;
char sign;
int number[2];
main()
{
    while(cin >>sign>> number[0]>>number[1])
{


        switch(sign)
        {
            case '-':
                {
                cout << number[0] - number[1]<<endl;
                break;
                }

            case '+':
                {
                cout << number[0] + number[1]<<endl;
                break;
                }
            case '*':
                {
                cout << number[0] * number[1]<<endl;
                break;
                }

            case '/':
                {
                    if ( number[1]==0)
                    {
                        break;
                    }
                    else
                    {
                    cout << number[0] / number[1]<<endl;
                    break;
                    }

                }

            case '%':
                {

                if ( number[1]==0)
                    {
                        break;
                    }
                    else
                    {
                    cout << number[0] % number[1]<<endl;
                    break;
                    }
                }

        }
        }
}
