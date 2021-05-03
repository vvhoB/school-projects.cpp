#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void gen(unsigned arr[])
{
    srand(time(NULL));
    for(int i=0; i<1000; i++)
        arr[i]=rand()%201;
}

void substr(unsigned arr[])
{
    unsigned sum=1, maxSum=1;
    for(int i=0; i<1000; i++)
    {    
        if(arr[i]==arr[i+1])
            sum++;
        else if(sum>maxSum)
            maxSum=sum;
            sum=1;
        if(sum>maxSum)
            maxSum=sum;
    }
    cout << "The longest substring holds  "<< maxSum <<" numbers. ";
}

int main()
{
    unsigned arr[10000];
    gen(arr);
    substr(arr);
}
