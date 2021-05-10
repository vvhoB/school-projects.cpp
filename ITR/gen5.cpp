#include <iostream>
#include <cmath>
using namespace std;

float gen(unsigned n)
{
    float res=0;
    float a=1;
    float b=3;
    float c;
    for (int i=1; i<=n; i++)
    {
        c=a/b;
        res=res+c;
        b=b+1;
    }
    return res;
}


int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    cout << "The sum of the sequence is " << gen(n) << endl;
}
