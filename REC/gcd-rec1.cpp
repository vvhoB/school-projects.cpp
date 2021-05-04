#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==b) 
    {
        return a;
    }
    else if(a>b)
    {
        return gcd(a-b,b);
    }
    else if(b>a)
    {
        return gcd(a,b-a);   
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

