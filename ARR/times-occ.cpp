#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void gen(unsigned arr[])
{
    srand(time(NULL));
    for(int i=0; i<1000; i++)
        arr[i]=1+rand()%100;
}

void calc(unsigned arr[])
{
    unsigned sum[101]={0};
    for(int i=0; i<1000; i++)
        sum[arr[i]]++;
    cout << "Number" << setw(12) << "Times" << endl;
    for(int i=0; i<101; i++)
        cout << i << setw(12) << sum[i] << endl;
}

int main()
{
    unsigned arr[1000];
    gen(arr);
    calc(arr);
}

//The program randomly generates an array of 1000 elements 0-100
//and prints out how many times every number had occured.


