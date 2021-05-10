#include<iostream>
#include<fstream>
using namespace std;

void sort(int arr[], int x)
{
    int p;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x-1-j; j++)
        {
            if (arr[j]>arr[j+1])
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
    ifstream ifile("sort-nums.txt");
    int x=0;
    int arr[1000];
    while(!ifile.eof())
        ifile >> arr[x++];
    ifile.close();
    sort(arr, x);    
    ofstream ofile("sort-nums2.txt");
    for(int i=0; i<x; i++)
    {
        if(i=x-1) ofile << arr[i];
        else ofile << arr[i] << " ";
    }
    ofile.close();
}
