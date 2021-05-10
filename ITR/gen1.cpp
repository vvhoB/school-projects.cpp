#include<iostream>
using namespace std;

int main()
{
    unsigned n,i;
    int a=1;
    cout << "Enter n: ";
    cin >> n;
    for (i=1; i<=n ; i++)
    {
        if (i==1) cout << "1" << endl;
        else
        {
            a=a+a;
            cout << a << endl;
        }
    }
}
