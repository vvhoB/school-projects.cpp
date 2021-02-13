#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

void wypisz(int tab1[11][11]);
void gen(int tab1[11][11], int tab2[11][11]);
void sum(int tab1[11][11], int tab2[11][11]);

int main()
{
    int tab1[11][11];
    int tab2[11][11];
    gen(tab1, tab2);
    wypisz(tab1);
    cout << "\nWygenerowana tablica po sumowaniu: " << endl;
    sum(tab1, tab2);
}

void gen(int tab1[11][11], int tab2[11][11])
{
    cout << "\nWygenerowana tablica: " << endl;
    srand(time(NULL));
    for(int i=0; i<=11; i++)
    {
        for(int j=0; j<=11; j++)
        {
            if(i==0 || i==11)
            {
                tab1[i][j]=0;
            }
            else if(j==0 || j==11)
            {
                tab1[i][j]=0;
            }
            else
            {
                tab1[i][j]=rand()%51;
            }
           tab2[i][j]=0;
        }
    }
}

void wypisz(int tab1[11][11])
{
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            cout << setw(6) <<  tab1[i][j] << setw(6);
        }
    cout << endl;
    }
    cout << "\n";
}

void sum(int tab1[11][11], int tab2[11][11])
{
    for(int i=1; i<11; i++)
    {
        for(int j=1; j<11; j++)
        {
           tab2[i][j] = tab1[i][j] + tab1[i-1][j-1] + tab1[i-1][j] + tab1[i-1][j+1] + tab1[i][j-1] + tab1[i][j+1] + tab1[i+1][j-1] +  tab1[i+1][j] + tab1[i+1][j+1];
        }
    }

    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            cout << setw(6) <<  tab2[i][j] << setw(6);
        }
    cout << endl;
    }
    cout << "\n";
}
