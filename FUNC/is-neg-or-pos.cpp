#include<iostream>
using namespace std;

string sign(int n)
{
    if(n==0) return "Enter number is 0. ";
    else if (n<0)
        return "Entered number is negative. ";
    else
        return "Entered nubmer is positive. ";    
}

int main()
{
    int n;
    cout << "Enter number n: ";
    cin >> n;
    cout << sign(n) << endl;
}


