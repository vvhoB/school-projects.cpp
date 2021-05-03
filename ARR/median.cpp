#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void gen(int arr[])
{
    srand(time(NULL));
    for(int i=0; i<20; i++)
        arr[i]=rand()%(11);
}

void print(int arr[])
{
    for(int i=0; i<20; i++)
        cout << arr[i] << " ";
}

void sort(int arr[])
{
    for(int i=0; i<20; i++)
    {
        int min_idx=i;
        for(int j=i+1; j<20; j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }
        swap(arr[min_idx], arr[i]);
    }
}

int main()
{
    int arr[20];
    gen(arr);
    cout << "Array: ";
    print(arr);
    sort(arr);
    cout <<"\nSorted array: ";
    print(arr);
    cout <<"\nThe median is " << (arr[9]+arr[10])/2;
}
