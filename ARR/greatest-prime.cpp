#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void gen(unsigned a, unsigned b, unsigned arr[100])
{
    srand(time(NULL));
    for(int i=0; i<100; i++)
    {
        arr[i]=a+rand()%(b-a+1);
        cout << arr[i] << ", ";
    }
}

void check(unsigned arr[100], unsigned x)
{
    for(int i=0; i<100; i++)
    {
        int j=2, p=1;
        while(arr[i]>j)
        {
            if (arr[i]%j==0)
            {
                p=0;
                break;
            }
          j++;
        }
        if(p==1)
        {
            cout << arr[i] << ", ";
            if(arr[i]>x)
            {
                x=arr[i];
            }
        }
    }
   cout << "\nThe greatest prime is " << x;
}

int main()
{
    cout << "Enter min, max: ";
    unsigned a,b,x=0;
    unsigned arr[100];
    cin >> a >> b;
    cout << "Generated array: ";
    gen(a,b,arr);
    cout << "\nPrimes are: ";
    check(arr, x);
}

//The program prints out prime numbers of randomly generated array
//and finds the greatest one.