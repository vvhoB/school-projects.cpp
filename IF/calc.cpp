#include<iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cin >> a;
    cin >> op;
    cin >> b;
    if(op=='+')
    {
        cout << a+b;
    }
    else if(op=='-')
    {
        cout << a-b;
    }
    else if(op=='*')
    {
        cout << a*b;
    }
    else if(op=='/')
    {
        cout << a/b;
    }
}

