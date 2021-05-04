#include<iostream>
using namespace std;

int fib(unsigned n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << n << " element of Fibonacci sequence is " << fib(n);
}

