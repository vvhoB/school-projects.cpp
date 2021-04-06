#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    cout << "Wprowadz zdanie: ";
    char zdanie[1000];
    cin.getline(zdanie, 1000);
    cout << "Wprowadz wzorzec: ";
    char wzorzec[50];
    cin.getline(wzorzec,50);
    int zdanie_dl = strlen(zdanie);
    int wzorzec_dl = strlen(wzorzec);
    int spacje=0;
    for(int i=0; i<zdanie_dl; i++)
    {
        if(zdanie[i]==' ')
        { 
            for(int j=i; j<zdanie_dl; j++)
            {    
                zdanie[j]=zdanie[j+1];
            }       
            spacje++;
        }    
    }
    zdanie_dl-=spacje;
    int count=0;
    char porownanie[wzorzec_dl];
    for(int i=0; i<zdanie_dl; i++)
    {
        for(int j=0; j<wzorzec_dl; j++)
        {
            porownanie[j]=zdanie[j+i];
        }        
        float if_equal = strcmp(porownanie, wzorzec);
        if(if_equal==0) count++;
    }
    cout << "W tekscie '" << wzorzec <<"' pojawia sie " << count <<" razy.";
}