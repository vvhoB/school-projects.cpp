#include<iostream>
using namespace std;

float gen(int n)
{
    if(n==1)
        return 0.2;
    else
        return gen(n-1)*-3;
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout << n << " element = " << gen(n); 
}

