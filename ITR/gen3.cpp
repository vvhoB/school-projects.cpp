#include<iostream>
using namespace std;

long long gen(unsigned n)
{
    long long result=0, a=-10;
    for(int i=1; i<=n; i++)
    {
        result=result+a;
        a=a+6;
    }
    return result;
}

int main()
{
    unsigned n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The sequence sum is: " << gen(n);
}
