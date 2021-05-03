#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void gen(int arr[])
{
   srand(time(NULL));
   for(int i = 0; i<15; i++)
        arr[i]=rand()%51;
}

void print(int arr[])
{
    for(int i = 0; i<15; i++)
        cout << arr[i] << " ";
}

void selectSort(int arr[])
{
    int min, p;
    for(int i = 0; i<15; i++)
    {
        min=arr[i];
        p=i;
        for(int j = i+1; j<15; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                p=j;
            }
        }
        if(arr[i]!=min)
        {
            arr[p]=arr[i];
            arr[i]=min;
        }
    }
}

int main()
{
    int arr[15];
    gen(arr);
    cout << "Array: ";
    print(arr);
    selectSort(arr);
    cout << "\nSorted array: ";
    print(arr);
}

