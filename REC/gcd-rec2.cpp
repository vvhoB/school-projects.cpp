#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
    {
        if(b>0)
        {
            return gcd(b,a%b);
        }
    }
}

int main()
{
    cout << "Enter a: ";
    int a;
    cin >> a;
    cout << "Enter b: ";
    int b;
    cin >> b;
    cout << "gcd of " << a << " and " << b << " is " << gcd(a, b);
}

