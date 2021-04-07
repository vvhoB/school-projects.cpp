#include<iostream>
using namespace std;

float interest(float value)
{
    float wynik;
    if (value<=50000)
    {
       wynik = 3.1;
    }
    else if (value>=100000)
    {
        wynik = 3.6;
    }
    else wynik = 3.4;
    return wynik;
}

int main()
{
    float value;
    cout << "Enter money value: ";
    cin >> value;
    cout << "Interest will equal to: " << interest(value) << endl;
    cout << "After 1 years time Mr. Kowalski will have " << value*(interest(value)/100)+value << " on his account. " << endl;
}
