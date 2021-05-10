#include<iostream>
using namespace std;

void den(unsigned n)

{
    for (int i=1; i<=n; i++)
        if(n%i==0) cout << i << " ";
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    den(n);
}
