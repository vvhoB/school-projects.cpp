#include<iostream>
using namespace std;

int main()
{
    string cm_unit="cm", inch_unit="in";
    int cm;
    cout << "Enter a value in centimeters: ";
    cin >> cm;
    cout << cm << cm_unit << " = " << cm*2.54 << inch_unit <<endl;
}

//The program takes a value in centimeters and 
//converts it to inches.
