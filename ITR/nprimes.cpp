#include<iostream>
#include<cmath>
using namespace std;

void prime(unsigned n)
{
    unsigned z, i=2, j, count=0;
    while(count<n)
    {
        z=sqrt(i);
        j=2;
        while(i%j!=0 && j<=z)
            j++;
        if(j>z)
        {
            cout << i << " ";
            count++;
        }
        i++;
    }
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    prime(n);
}


