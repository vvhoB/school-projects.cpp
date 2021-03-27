#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char word[40];
    cout << "Enter a word: ";
    cin >> word;
    int length = strlen(word);
    int vow=0;
    int con=0;
    for(int i=0; i<=length-1;i++)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='y')
            vow++;
        else
            con++;
    }
    cout << "This word has " << vow << " vowels and " << con << " consonants.";
}

//The program takes a word and then prints out 
//its number of vowels and consonants