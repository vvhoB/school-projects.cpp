#include<iostream>
using namespace std;

int main()
{
    float value, prcnt;
    cout << "Enter deposited value: ";
    cin >> value;
    if (value<50000) prcnt=3.1;
    else if (value>100000) prcnt=3.6;
    else prcnt=3.4;
    cout << "After 1 years time Mr. Kowalski will have " << value + (value*prcnt)/100 << " on his account. ";
}
