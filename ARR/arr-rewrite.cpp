#include<iostream>
using namespace std;

void enter(unsigned size, unsigned arr[])
{
    for(int i=0; i<size; i++)
    {
     cout << "Enter arr[" << i << "]: ";
     cin >> arr[i];
    }
}

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    unsigned m=2*n;
    unsigned arr1[n], arr2[n], arr3[m];
    cout << "\n";
    enter(n, arr1);
    cout << "\n";
    enter(n, arr2);
    cout << "\n";
    for(int i=0; i<n; i++)
    {
      arr3[i]=arr1[i];
      cout << "arr3[" << i << "] " << arr3[i] << endl;
    }
    for(int j=0; j<n; j++)
    {
        arr3[j+n]=arr2[j];
        cout << "arr3[" << j+n << "] " << arr3[j+n] << endl;
    }
}

//The program takes in 2 user input arrays and
//rewrites their values to the 3rd array, combining
//them.

