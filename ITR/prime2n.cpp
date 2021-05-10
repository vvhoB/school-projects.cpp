#include<iostream>
#include<cmath>
using namespace std;

void prime(unsigned n)
{
    unsigned z, i, j;
    for(i=2; i<=n; i++)
    {
        z=sqrt(i);
        j=2;
        while(i%j!=0 && j<=z)
            j++;
        if(j>z) cout << i << " ";
    }
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    prime(n);
}

