#include<iostream>
using namespace std;

float gen(int n)
{
    if (n==1)
        return -3;
    else if (n==2)
        return 1;
    else
        return gen(n-1)*gen(n-2)-1;
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout << n << " element = " << gen(n); 
}

