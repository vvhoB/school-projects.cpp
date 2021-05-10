#include<iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int main()
{
    unsigned a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
}
