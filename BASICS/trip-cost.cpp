#include<iostream>
using namespace std;

int main()
{   
    float gas_cost;
    int gas_use, dist, ppl;
    cout << "Enter number of people: ";
    cin >> ppl;
    cout << "Enter travel distance: ";
    cin >> dist;
    cout << "Enter the cost of 1l of gas: ";
    cin >> gas_cost;
    cout << "Enter average gas usage per 100km: ";
    cin >> gas_use;
    cout << "\n";
    float cost=(gas_cost*gas_use)*dist/100;
    cout << "The total cost of the trip is: " << cost << endl;
    cout << "The cost per person is: " << cost/ppl;
    return 0;
}

//The program calculates the cost of a car trip