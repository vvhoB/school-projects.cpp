#include<iostream>
using namespace std;

int main()
{
    int arr[3][4];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << "Enter arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "\nArray: " << endl;
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }   
}