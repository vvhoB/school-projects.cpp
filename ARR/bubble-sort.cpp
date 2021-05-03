#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;

void gen(int arr[])
{
    srand(time(NULL));
    for(int i=0; i<20; i++)
        arr[i]=rand()%101;
}

void print(int arr[])
{
    for(int i=0; i<20; i++)
        cout << arr[i] << " ";
}

void bubbleSort(int arr[])
{
    int p;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                p=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=p;
            }
        }
    }   
}


int main()
{
    int arr[20];
    gen(arr);
    cout << "Array: ";
    print(arr);
    bubbleSort(arr);
    cout <<"'\nSorted array: ";
    print(arr);
}

