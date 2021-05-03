#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void gen(int arr1[11][11], int arr2[11][11])
{
    cout << "\nGenerated array: " << endl;
    srand(time(NULL));
    for(int i=0; i<=11; i++)
    {
        for(int j=0; j<=11; j++)
        {
            if(i==0 || i==11)
            {
                arr1[i][j]=0;
            }
            else if(j==0 || j==11)
            {
                arr1[i][j]=0;
            }
            else
            {
                arr1[i][j]=rand()%51;
            }
           arr2[i][j]=0;
        }
    }
}

void print(int arr1[11][11])
{
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            cout << setw(6) <<  arr1[i][j] << setw(6);
        }
    cout << endl;
    }
    cout << "\n";
}

void sum(int arr1[11][11], int arr2[11][11])
{
    for(int i=1; i<11; i++)
    {
        for(int j=1; j<11; j++)
        {
           arr2[i][j] = arr1[i][j] + arr1[i-1][j-1] + arr1[i-1][j] + arr1[i-1][j+1] + arr1[i][j-1] + arr1[i][j+1] + arr1[i+1][j-1] +  arr1[i+1][j] + arr1[i+1][j+1];
        }
    }

    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            cout << setw(6) <<  arr2[i][j] << setw(6);
        }
    cout << endl;
    }
    cout << "\n";
}

int main()
{
    int arr1[11][11];
    int arr2[11][11];
    gen(arr1, arr2);
    print(arr1);
    cout << "\nArray after summing adjacent cells: " << endl;
    sum(arr1, arr2);
}

