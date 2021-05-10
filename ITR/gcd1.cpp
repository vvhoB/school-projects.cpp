#include<iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
  unsigned r;
  while(b!=0)
  {
    r=a%b;
    a=b;
    b=r;
  }
  return a;
}

int main()
{
  unsigned a, b;
  cout << "Enter a and b: ";
  cin >> a >> b;
  cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
}
