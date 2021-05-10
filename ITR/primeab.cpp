#include<iostream>
#include<cmath>
using namespace std;

void prime(unsigned a, unsigned b)
{
    unsigned z, i, j;
    for(i=a; i<=b; i++)
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
    cout << "Enter a and b: ";
    unsigned a,b;
    cin >> a >> b;
    prime(a,b);
}

