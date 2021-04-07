#include<iostream>
#include<cmath>
using namespace std;

double delta(double x, double y, double z)
{
  return pow(y,2)-4*x*z;
}

int main()
{
    double a,b,c,d;
    cout << "Enter value a: ";
    cin >> a;
    if(a==0)
    {
    cout << "Entered value of a doesnt meet requirements of quadratic equation.  ";
    return 0;
    }
    else
    {
      cout << "Enter value b: ";
      cin >> b;
      cout << "Enter value c: ";
      cin >> c;
      d=delta(a,b,c);
      if(d<0)
        {
          cout << "No roots. ";
        }
      else if(d==0)
        {
          cout << "Root = " << -b/(2*a) << endl;
        }
      else
        { 
          cout << "Root 1 = " << (-b-sqrt(d))/(2*a) << endl;
          cout << "Root 2 = " << (-b+sqrt(d))/(2*a) << endl;
        }
    }
}



