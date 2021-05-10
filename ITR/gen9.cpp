#include <iostream>
using namespace std;

long long gen(unsigned n)
{
    long long res=0;

    for(int i=1; i<=n; i++)
    {
        res=res+fact(i);
    }
    return res;
}
long long fact(unsigned i)
{
    long long res=1;
    for (int j=1; j<=i; j++)
    {
        res=res*j;
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
