#include<iostream>
using namespace std;

int main()
{
    float a;
    cout << "Enter a number: ";
    cin >> a;
    if (a<0) cout << "Entered number is negative ";
       else if (a==0) cout << "Entered number is equal to 0. ";
        else cout << "Entered number is positive. ";
}
