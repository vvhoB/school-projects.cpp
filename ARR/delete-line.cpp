#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void gen(int arr[10][10])
{
    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            arr[i][j]=rand()%10;
        }
    }
}

void print(int arr[10][10])
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout << setw(4) << arr[i][j] << setw(4);
        }
    cout << endl;
    }
}

void del(int arr[10][10], int n)
{
    int i=n; 
    for(i; i<=8; i++)
    {
        for(int j=0; j<10; j++)
        {
            swap(arr[i][j], arr[i+1][j]);
        }
    }
}

void rewrite(int arr[10][10], int arr2[9][10])
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<10; j++)
        {
            arr2[i][j]=arr[i][j];
        }
    }
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<10; j++)
        {
           cout << setw(4) << arr2[i][j] << setw(4);
        }
    cout << "\n";
    }
}

int main()
{
    int arr[10][10];
    cout << "\n10x10 array: " << endl;
    cout << "\n";
    gen(arr);
    print(arr);
    cout << "\nDelete line [idx]: ";
    int n;
    cin >> n;
    cout << "\n";
    del(arr, n);
    int arr2[9][10];
    rewrite(arr, arr2);
}

