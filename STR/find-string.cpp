#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    cout << "Enter a sentence: ";
    char text[1000];
    cin.getline(text, 1000);
    cout << "Enter search phrase: ";
    char search[50];
    cin.getline(search,50);
    int textlen = strlen(text);
    int searchlen = strlen(search);
    int spaces=0;
    for(int i=0; i<textlen; i++)
    {
        if(text[i]==' ')
        { 
            for(int j=i; j<textlen; j++)
            {    
                text[j]=text[j+1];
            }       
            spaces++;
        }    
    }
    textlen-=spaces;
    int count=0;
    char comp[searchlen];
    for(int i=0; i<textlen; i++)
    {
        for(int j=0; j<searchlen; j++)
        {
            comp[j]=text[j+i];
        }        
        float if_equal = strcmp(comp, search);
        if(if_equal==0) count++;
    }
    cout << "In the text '" << search <<"' occured " << count <<" times.";
}