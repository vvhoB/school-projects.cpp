#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int x;
    fstream ofile;
    ofile.open("save-number.txt", ios::out | ios::app);
    ofile << x;
    ofile.close();
}


