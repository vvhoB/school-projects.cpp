#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;
    float p = 0.5*(a+b+c);
    if (p-a>0 && p-b>0 && p-c>0) cout << "The area of this triangle equals: " << sqrt(p*(p-a)*(p-b)*(p-c));
        else cout << "Entered values don't make a triangle. ";
}

