#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[100];
    cout << "Enter values (a,b): ";
    unsigned a, b;
    cin >> a >> b;
    for(int i=0; i<100; i++)
    {
        arr[i]=a+rand()%(b-a+1);
        cout << arr[i] << " ";
    }
    unsigned min=arr[0];
    for(int i=1; i<100; i++)
    {   
        if(min>arr[i]) min=arr[i];
    }
    cout << "\nThe smallest number in the array is " << min;
}

//The program prints out the smallest number 
//of a randomly generated array.