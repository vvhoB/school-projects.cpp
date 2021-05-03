#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    unsigned arr[n];
    float multi=1.0;
    for(int i=0; i<n; i++)
    {
        cout << "\nEnter arr" << "[" << i << "]: ";
        cin >> arr[i];
        multi=multi*arr[i];
    }
    cout << "Geometric average of this array is " << pow(multi,(1/n));
}

//The program calculates geometric average of user
//input array




