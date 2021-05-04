#include<iostream>
using namespace std;

float gen(int n)
{
    if (n==1)
        return -2;
    else if (n==2)
        return 2.5;
    else if(n==3)
        return 3;
    else
        return gen(n-3)-gen(n-1);
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout << n << " element = " << gen(n); 
}

