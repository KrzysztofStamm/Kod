#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests=0,numbers=0,temp=0;
    vector<int> tab;
    vector<int> tabResult;
    cin >> tests;

    for (int i=0;i<tests;i++)
    {
        cin >> numbers;

        for (int j=1;j<=numbers;j++)
        {
            cin >> temp;
            tab.push_back(temp);
            if (j % 2 == 0)
            {
                tabResult.push_back(tab[j-1]);

            }
            else
            {
                continue;
            }
        }

        for (int j=1;j<=numbers;j++)
        {
            if (j % 2 == 1)
            {
                tabResult.push_back(tab[j-1]);

            }
            else
            {
                continue;
            }
        }

        for (int j=0;j<numbers;j++)
        {
            cout << tabResult[j]<<" ";
        }
        cout <<endl;
        for (int j=0;j<numbers;j++)
        {
            tab.pop_back();//usuwanie elementów ¿eby kolejny test mog³ przejsc
            tabResult.pop_back();
        }

    }
}
