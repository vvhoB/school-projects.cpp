#include<iostream>
#include<cmath>
using namespace std;

float heron(float a, float b, float c)
{
   float p=0.5*(a+b+c);
   if(p-a>0 && p-b>0 && p-c>0)
      return sqrt(p*(p-a)*(p-b)*(p-c));
   else return 0;
}

int main()
{
   float a, b, c;
   cout << "Enter 3 triangle sides (a,b,c): ";
   cin >> a >> b >> c;
   cout  << "Area of this triangle equals " << heron(a,b,c) << endl;
}
