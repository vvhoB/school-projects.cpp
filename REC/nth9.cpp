#include<iostream>
using namespace std;

int gen(int n)
{
    if(n==1)
        return 4;
    else
        return gen(n-1)*3;
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout << n << " element = " << gen(n); 
}

