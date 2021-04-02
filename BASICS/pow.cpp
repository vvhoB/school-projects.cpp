#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter int a: ";
    cin >> a;
    cout << "Enter int b: ";
    cin >> b;
    cout <<  a << "^" << b << "= " << pow(a,b);
}

//The program calculates a to the power of b
//using the pow() function