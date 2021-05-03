#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i=0; i<10; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "\nEven numbers are: ";
    for (int i=0; i<10; i++)
    {
        if (arr[i]%2==0)
            cout << arr[i] << " ";
    }
    cout << "\nOdd numbers are: ";
    for (int i=0; i<10; i++)
    {
        if (arr[i]%2==1)
            cout << arr[i] << " ";
    }
}

//The program takes 10 user input numbers to an array
//and prints which of them are odd, and which even.