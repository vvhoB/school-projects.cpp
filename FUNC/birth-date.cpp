#include<iostream>
using namespace std;

string is_correct(int yy, int mm, int dd)
{
  if (dd>31)
  {
      return "Day entered incorrectly.";
  }
  else if (mm==2 && dd>29)
  {
      return "Day or month entered incorrectly.";
  }
  else if (mm>12)
   {
      return "Month entered incorrectly";
   }
  else return "Date entered correctly.";
}

int main()
{
    int dd,mm,yy;
    cout << "Enter your birth date (dd/mm/yy): ";
    cin >> dd >> mm >> yy;
    cout << is_correct(dd,mm,dd) << endl;
}
