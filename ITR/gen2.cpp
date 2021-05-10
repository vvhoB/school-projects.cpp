#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int start=3;
    cout << "Enter n: ";
    cin >> n;
    for (i=1; i<=n ; i++)
    {
        if (i==1) cout << "3" << endl;
        else
        {
            start=start*-2;
            cout << start << endl;
        }
    }
}
