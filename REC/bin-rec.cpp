#include<iostream>
using namespace std;

unsigned horner(int n, int arr[], int x)
{
    if(n==0)
        return arr[0];
    else
        return horner(n-1, arr, x)*x+arr[n];
}

int main()
{
    cout << "Enter polynomial degree ";
    int n;
    cin >> n;
    int arr[n+1];
    cout << "Enter x: ";
    int x;
    cin >> x;
    for(int i=0; i<=n; i++)
    {
        cin >> arr[i];
    }
    cout << horner(n,arr,x);
}
