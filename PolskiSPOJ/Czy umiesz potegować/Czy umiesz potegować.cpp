#include <iostream>

using namespace std;

int main()
{
    int tests=0;
    int base=0;
    int p=0;
    cin >> tests;
    for (int i=0;i<tests;i++)
    {
        cin >> base >> p;
        if(!p) return '1';
        if(base<0) base=-base;
        int pow=1;
        for(base%=10;p;p>>=1)
        {
        if(p&1) pow=(pow*base)%10;
        base=(base*base)%10;
        }
        cout<< (char)('0'+pow)<<endl;
    }


}
