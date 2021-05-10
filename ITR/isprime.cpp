#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(unsigned n)
{
    unsigned z=sqrt(n);
    unsigned i=2;
    while (n%i!=0 && i<=z)
        i++;
    if (i>z) return true;
    else return false;
}

int main()
{
    cout << "Enter: ";
    unsigned n;
    cin >> n;
    if(is_prime(n)) cout << n << "is prime.";
    else cout << n << "isn't prime.";
}
