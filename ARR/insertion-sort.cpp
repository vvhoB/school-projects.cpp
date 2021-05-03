#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void gen(int arr[])
{
    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        arr[i]=rand()%31;
    }
}

void print(int arr[])
{
    for(int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[])
{
    for(int i=1; i<10; i++)
    {
        int p=arr[i];
        int j=i-1;
        while(arr[j]>p && j>=0)
        //j>=0 zabezpiecza zeby nie wyjsc z tablicy pon indx 0.
        {
            arr[j+1]=arr[j];
            j--;
            //poszukiwanie gdzie wstawic p
        }
    arr[j+1]=p;
    //gdzie wstawic p
    }
}

int main()
{
    int arr[10];
    gen(arr);
    cout << "Array: ";
    print(arr);
    cout << "\nSorted array: ";
    insertionSort(arr);
    print(arr);
}
