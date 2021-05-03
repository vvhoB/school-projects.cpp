#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void gen(unsigned arr[])
{
    srand(time(NULL));
    for(int i=0; i<10000; i++)
        arr[i]=rand()%301;
}

void mode(unsigned arr[])
{
    unsigned sum[301]={0};
    for(int i=0; i<10000; i++)
        sum[arr[i]]++;
    unsigned max=sum[0];
    for(int i=0; i<301; i++)
        if(sum[i]>max) max=sum[i];
    for(int i=0; i<301; i++)
        if(sum[i]==max) cout << i << " " << sum[i] << endl;
}

int main()
{
    unsigned arr[10000];
    gen(arr);
    mode(arr);
}

//The program finds the mode in 10000-elements array and prints it.