#include<iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter a number: ";
    cin >> a;
    if (a<0) b=a*-1;
    cout << "The absolute value of " << a << " is " << b << ". ";
}


