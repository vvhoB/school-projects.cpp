#include<iostream>
#include<fstream>
using namespace std;

struct player
{
    string first_name;
    string last_name;
    unsigned points;
};

void sort(player arr[], unsigned n)
{
    player p;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {    
            if(arr[j].points < arr[j+1].points)
            {
                p=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=p;
            }
        }
    }
}

int main()
{   
    player arr[35];
    ifstream input("results.txt");
    unsigned n=0;
    while(!input.eof())
    {
        input >> arr[n].first_name;
        input >> arr[n].last_name;
        input >> arr[n].points;
        n++;
    }
    input.close();
    sort(arr, n);
    ofstream output("sorted-results.txt");
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
            output << arr[i].first_name << " " << arr[i].last_name << " " << arr[i].points;
        else 
            output << arr[i].first_name << " " << arr[i].last_name << " " << arr[i].points << endl;
    }
    output.close();
}
