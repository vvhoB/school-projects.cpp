#include<iostream>
using namespace std;

int main()
{
    int a, b, i;
    long long power=1;
    cout << "Enter a and b: ";
    cin >> a >> b;
    for (int i=1; i<=b; i++)
    {
        power=power*a;
    }
    cout << a << "^" << b << " = " << power << endl;
}
