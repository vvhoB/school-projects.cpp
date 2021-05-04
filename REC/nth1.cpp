#include<iostream>
using namespace std;

unsigned gen(unsigned n)
{
    if(n==0)
        return 4;
    else
        return gen(n-1)+3;
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << n << " element = " << gen(n); 
}

