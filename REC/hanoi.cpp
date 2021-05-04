#include<iostream>
using namespace std;

void hanoi(int n,char a, char b, char c)
{
    if(n>0)
    {
        hanoi(n-1,a,b,c);
        cout<< a << " na "<< b<<endl;
        hanoi(n-1,b,c,a);
    }
}

int main()
{
    cout<<"Enter number of rings";
    int n;
    cin>>n;
    char a='a';
    char b='b';
    char c='c';
    hanoi(n,a,b,c);
}

