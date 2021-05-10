#include <iostream>
using namespace std;

float gen(unsigned n)
{
    float wynik=0;
    float a=-2;
    for (int i=1; i<=n; i++)
    {
        wynik=wynik+a;
        if (i%2==1)
        {
            a=a*(-1)+3;
        }

        else a=a*(-1)-3;
    }
    return wynik;
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << "The sum of the sequence is " << gen(n) << endl;
}
