#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout << "Enter a text: ";
    string text;
    getline(cin, text);
    int length = text.length();
    string outcome;
    cout << "Unique letters of this text are: ";
    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(text[i]==text[j] && text[i]!=' ')
            {
                text.replace(j,1," ");
            }
        }
        if(text[i]!=' ') cout << text[i] << ", ";
    }
}

//The program takes a text and prints out 
//its unique letters
