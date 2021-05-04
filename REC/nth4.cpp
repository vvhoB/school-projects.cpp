#include<iostream>
using namespace std;

float gen(int n)
{
    if(n==1)
        return -10;
    else
        return gen(n-1)*-0.5;
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout << n << " element = " << gen(n); 
}

