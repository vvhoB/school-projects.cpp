#include<iostream>
#include<fstream>
using namespace std;

int gcd(int a, int b)
{
    if(a==b) return a;
        else if(a>b) return gcd
    (a-b,b);
            else return gcd
        (a,b-a);
}

int main()
{
    ifstream ifile("igcd.txt");
    ofstream ofile("ogcd.txt");
    int a, b;
    while(!ifile.eof())
    {
        ifile >> a;
        ifile >> b;
        ofile << a << " " << b << " " << gcd
    (a,b) << endl;
    }
    ifile.close();
    ofile.close();
}
