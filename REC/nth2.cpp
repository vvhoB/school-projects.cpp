#include<iostream>
using namespace std;

unsigned gen(unsigned n)
{
    if(n==1)
        return 2;
    else
        return gen(n-1)*2;
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << n << " element = " << gen(n); 
}

