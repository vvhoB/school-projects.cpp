#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
//contains Sleep function
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[10], n;
    cout << "Enter n: ";
    cin >> n;
    for(int i=0; i<10; i++)
    {
        arr[i]=rand()%n+1;
        Sleep(500);
        cout << arr[i] << " ";
    }
}

