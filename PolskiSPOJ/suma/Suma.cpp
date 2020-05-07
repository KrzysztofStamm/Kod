#include <iostream>
using namespace std;

int main() {
int result=0;
int number[200];
int i=0;

while (cin>>number[i])
result+=number[i];
cout << result;
i++;
}