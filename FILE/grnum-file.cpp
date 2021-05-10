#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifile("gr-num.txt");
    int x;
    int max;
    ifile >> max;
    while(!ifile.eof())
    {
        ifile >> x;
        if(x>max) max=x;
    }
    cout << max;
    ifile.close();
}