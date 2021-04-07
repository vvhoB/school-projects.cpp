#include<iostream>
using namespace std;

int absolute(int a)
{
    if (a<=0)  return a*-1;
        else return a;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Absolute value of " << a << " equals " << absolute(a);
}
