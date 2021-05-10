#include<iostream>
using namespace std;

unsigned long long fibo(unsigned n)
{
    unsigned long long result, a=0, b=1;
    if(n==0) return 0;
    else if (n==1)return 1;
       else
       {
           for(int i=2; i<=n; i++)
           {
               result=a+b;
               a=b;
               b=result;
           }
           return result;
       }
}

int main()
{
    unsigned n;
    cout << "Enter n: ";
    cin >> n;
    cout << n << "element of fibonacci sequence is" << fibo(n);
}
