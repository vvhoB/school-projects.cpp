#include<iostream>
using namespace std;

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    for (int i=2; i<=n; i=i+2)
    {
        cout << i << endl;
    }
}
