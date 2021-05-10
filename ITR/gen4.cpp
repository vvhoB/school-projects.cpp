#include <iostream>
using namespace std;

float nom(unsigned n)
{
    return 2*n;
}

float denom(unsigned n)
{
    float result=0, a=1;
    for (int i=1; i<=n; i++)
    {
        result=result+a;
        a=a+1;
    }
    return result;
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << "The sequence sum is: " << nom(n)/denom(n) << endl;
}
