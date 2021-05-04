#include<iostream>
#include<cmath>
using namespace std;


int exp(int a, int b)
{
    if(b==0)
        return 1;
    if(b%2!=0)
        return a*exp(a, b-1);
    int z=exp(a, b/2); 
        return z*z;
}

int main()
{
    cout << "Enter a: ";
    int a;
    cin >> a;
    cout << "Enter b: ";
    int b;
    cin >> b;
    cout << a << "^" << b << " = " << exp(a,b); 
}
