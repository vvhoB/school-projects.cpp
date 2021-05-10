#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int x;
    fstream ifile("print-numbers.txt");
    while(!ifile.eof()) 
    {
        ifile >> x;
        cout << x << endl;
    } 
    ifile.close();
}


