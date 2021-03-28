#include<iostream>
#include<string>
using namespace std;

void count(string word, int length);
void print(string word, int length, int con, int vow);

int main()
{
    cout << "Enter a word: ";
    string word;
    cin >> word;
    int length=word.length();
    count(word,length);
}

void count(string word, int length)
{
    int con=0, vow=0;
    for(int i=0; i<length; i++)
    {
        if(word[i]=='a' || word[i]=='o' || word[i]=='e' || word[i]=='i' || word[i]=='u' || word[i]=='y')
        {
            vow++;
        }
        else con++;
    }
    cout << "In the given word there is: " << endl;
    print(word, length, con, vow);
}

void print(string word, int length, int con, int vow)
{
    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(word[i]==word[j] && word[i]!=' ')
            {
                word.replace(j,1," ");
            }
        }
    }
    cout << vow << " - Vowels: ";
    for(int i=0; i<length; i++)
    {
        if(word[i]=='a' || word[i]=='o' || word[i]=='e' || word[i]=='i' || word[i]=='u' || word[i]=='y' && word[i]!=' ')
        {
            cout << word[i] << ", ";
        }
    }
    cout << "\n";
    cout << con << " - Consonants: ";
    for(int i=0; i<length; i++)
    {
        if(word[i]!='a' && word[i]!='o' && word[i]!='e' && word[i]!='i' && word[i]!='u' && word[i]!='y' && word[i]!=' ')
        {
            cout << word[i] << ", ";
        }
    }
}

//The program takes a word and then prints 
//out how many vowels and consonants it has, 
//and displays them