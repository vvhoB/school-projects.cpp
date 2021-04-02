#include<iostream>
using namespace std;

int main()
{
    string kg_unit = "kg", lb_unit = "lb";
    cout << "Enter a value in kilograms: ";
    int a;
    cin >> a;
    cout << a << kg_unit << " = " << a * 2.2046 << lb_unit << endl;
}

//The program takes value in kilograms and 
//converts it into pounds