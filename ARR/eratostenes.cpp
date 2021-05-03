#include<iostream>
using namespace std;

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    bool arr[n+1];
    for(int i=2; i<=n; i++)
        arr[i]=true;
    unsigned i=2, j;
    while(i*2<=n)
    {
        if(arr[i])
        {
            j=2;
            while(i*j<=n)
            {
                arr[j*i]=false;
                j++;
            }
        }
        i++;
    }
    for(int i=2; i<=n; i++)
        if (arr[i]) cout << i << " ";
}
