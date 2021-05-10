#include <iostream>
using namespace std;

float nom(unsigned n)
{
    float res=1, a=2;
    for(int i=1; i<=n; i++)
    {
        res=res*a;
        a=a+0.5;
    }
    return res;
}

float denom(unsigned n)
{
    float res=1, a=-3;
    for (int i=1; i<=n; i++)
    {
        res=res*a;
        a=a*0.1;
    }
    return res;
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << "The sum of the sequence is " << nom(n)/denom(n) << endl;
}

