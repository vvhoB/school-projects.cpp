#include<iostream>
#include<cmath>
using namespace std;

unsigned long long fact(unsigned n)
{
    unsigned long long result=1;
    for(int i=1; i<=n; i++)
        result=result*i;
    return result;
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << "!" << n << " = " << fact(n);
}
