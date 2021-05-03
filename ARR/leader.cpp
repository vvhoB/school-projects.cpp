#include<iostream>
using namespace std;

void fill(unsigned arr[], unsigned n)
{
    for(int i=0; i<n; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void find(unsigned arr[], unsigned n)
{
    unsigned leader=arr[0], sum=1;
    for(int i=1; i<n; i++)
    {
        if(sum==0)
        {
            leader=arr[1];
            sum=1;
        }
        else
            if(leader==arr[i])
                sum++;
            else
                sum--;
    }
    if(sum==0) cout << "Theres no leader. ";
    else
    {
        sum=0;
        for(int i=0; i<n; i++)
            if(leader==arr[i]) sum++;
        if (sum>n/2) cout << "Leader is " << leader;
            else cout << "Theres no leader";
    }
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    unsigned arr[n];
    fill(arr, n);
    find(arr, n);
}
