#include<iostream>
using namespace std;

float gen(int n)
{
    if (n==1)
        return 1.5;
    else if (n==2)
        return 1;
    else if (n==3)
        return 0.5;
    else
        return 2*gen(n-1)-gen(n-3);
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    cout << n << " element = " << gen(n); 
}




