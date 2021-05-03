#include<iostream>
using namespace std;

int main()
{
    cout << "Enter number of bits: ";
    unsigned n;
    cin >> n;
    unsigned arr[n];
    cout << "Enter bit by bit:";
    for(int i=0; i<n; i++)
    cin >> arr[i];
    unsigned result=arr[0];
    for(int i=1; i<n; i++)
        result=result*2+arr[i];
    cout << "Entered value in decimal is "<< result;
}

//Binary to decimal converter using Horner's method