#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

bool prime(int x)
{
    int j=2;
    int z=sqrt(x);
    while(x%j!=0 && j<=z)
        j++;
    if(j>z) return true;
    else return false;
}

int main()
{
    srand(time(NULL));
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    ofstream ofile("primes.txt");
    int x;
    for (int i = 0; i < n; i++)
    {
      x = rand();      
      if(prime(x)) ofile << x << " "; 
    }
    ofile.close();
}
