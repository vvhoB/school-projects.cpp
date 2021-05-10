#include <iostream>
using namespace std;

float gen(unsigned n)
{
    float res=1, a=4;
    for (int i=1; i<=n; i++)
    {
        res=res*a;
        if(i%2==1)
        {
            a=a*-1-4;
        }
        else a=a*-1+4;
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

