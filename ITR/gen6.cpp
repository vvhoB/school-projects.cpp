#include <iostream>
#include <cmath>
using namespace std;

float gen(unsigned n)
{
    float res=0;
    float a=3;
    float b=1;
    for (int i=1; i<=n; i++)
    {
        b=2*a/i;
        res=res+b;
        a=2*a;
    }
    return res;
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << "The sum of the sequence is " << gen(n) << endl;
}
