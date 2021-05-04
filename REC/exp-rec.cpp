#include<iostream>
using namespace std;

unsigned int power(unsigned a, unsigned b)
{
    if (b!=0)
        return (a*power(a, b-1));
    else
        return 1;
}

int main()
{
    cout << "Enter a: ";
    unsigned a;
    cin >> a;
    cout << "Enter b: ";
    unsigned b;
    cin >> b;
    cout << a << "^" << b << "= " << power(a,b);
}

