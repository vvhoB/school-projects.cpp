#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter int a: ";
    cin >> a;
    cout << "Enter int b: ";
    cin >> b;
    if(a%b==0) cout << "a is divisible by b";
        else cout << "a isn't divisible by b";
}

//The program takes 2 integers and checks
//if the 1st one is divisible by the second.