#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void gen(int arr[10][10])
{
    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
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
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void text(int sum)
{
    switch(sum)
    {    
    case 0:
        cout << " theres no values greater than ";
        break;
    case 1:
        cout << " theres " << sum << " value greater than ";
        break;
    default:
       cout << " theres " << sum << " values greater than ";
       break;
    }
}

void calc(int arr[10][10], int x)
{
    for(int i=0; i<10; i++)
    {
        int sum=0;
        for(int j=0; j<10; j++)
        {
            if(arr[j][i]>x)
            {
                sum++;
            }
        }
        cout << "\nIn column " << i+1;
        text(sum);
        cout << x <<". ";
    }
}

int main()
{
    int arr[10][10];
    gen(arr);
    cout << "Array: " << endl;
    print(arr);
    cout << "\nEnter x: ";
    int x;
    cin >> x;
    if(x<0 || x>9)
    {
        cout << "x must be 0<x<9 ";
        exit(0);
    }
    else
        calc(arr, x);
}