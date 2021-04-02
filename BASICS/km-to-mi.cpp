#include<iostream>
using namespace std;

int main ()
{
    string km_unit = "km", miles_unit = "mi";
    cout << "Enter a distance in kilometers: ";
    int a;
    cin >> a;
    cout << a << km_unit << " = " << a * 1.609 << miles_unit << endl;
}

//The program takes a value in kilometers 
//and converts it into miles.