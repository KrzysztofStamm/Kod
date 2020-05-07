#include <iostream>
using namespace std;

int main() {
int tests=0;
string line;

cin>>tests;
for (int i=0;i<tests;i++)
{
    cin >> line;
    for (int j=0;j<line.length()/2;j++)
    {
        cout << line[j]<<endl;
    }
}
}