#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i=0; i<10; i++)
    {
        cout << "Enter arr[" << i << "]:";
        cin >> arr[i];
    }
    cout << "Entered numbers are: " << endl;
    for (int i=0; i<10; i++)
       cout << "[" << i << "] " << arr[i] <<endl;
}

//The program takes 10 user input numbers to an array 
//and prints them.