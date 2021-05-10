#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    ofstream ofile("rand-num.txt");
    for(int i=0; i<10; i++)
    {
        ofile << rand() << endl;
    }
    ofile.close();
}
