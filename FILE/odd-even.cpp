#include<iostream>
#include<fstream>
using namespace std;

void save(int size, int arr[], ofstream& file)
{
    for(int i=0; i<size; i++)
    {
        if(i==size-1) file << arr[i] << endl;
            else file << arr[i] << " ";
    }
}

int main()
{
    ifstream ifile("oe-input.txt");
    int n=0;
    int num[100];
    while(!ifile.eof())
        ifile >> num[n++];
    ifile.close();
    ofstream ofile("oe-output.txt");
    int a=0, b=0;
    int even[100], odd[100];
    for(int i=0; i<n; i++)
    {
        if(num[i]%2==0)
        {
            even[a]=num[i];
            a++;
        }
        else
        {
            odd[b]=num[i];
            b++;
        }
    }
    save(a, even, ofile);
    save(b, odd, ofile);
    ofile.close();
}