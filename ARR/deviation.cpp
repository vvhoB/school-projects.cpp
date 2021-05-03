#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

void gen(int arr[])
{
    srand(time(NULL));
    for(int i=0; i<20; i++)
    {
        arr[i]=rand()%6;
    }
}

void print(int arr[])
{
    for(int i=0; i<20; i++)
    {
        cout << arr[i] << " ";
    }
}

float nominator(int arr[], int s)
{
    float result=0, eq;
    for(int i=0; i<20; i++)
    {
        eq=pow((arr[i]-s),2);
        result+=eq;
    }
    return result;
}
int main()
{
    int n=20;
    int arr[n];
    gen(arr);
    cout << "Array: ";
    print(arr);
    float sum=0.0;
    for(int i=0; i<20; i++)
    {
        sum+=arr[i];
    }
    int s=sum/n;
    cout << "\nStandard deviation of this array is: " << sqrt(nominator(arr, s)/n-1);
}
