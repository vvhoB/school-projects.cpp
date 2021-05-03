#include<iostream>
using namespace std;

int main()
{
    int arr[8];
    int sum=0;
    for (int i=0; i<8; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
        sum=sum+arr[i];
    }
    cout << "Sum of the array values is " << sum << endl;
    cout << "Average is " << sum/8.0 << endl;
}

//The program takes 8 user input values, sums them and 
//calculates the average