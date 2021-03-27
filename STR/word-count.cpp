#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int length = sentence.length();
    int word=0;
    for(int i=0; i<=length; i++)
    {
        if(i!=0 && sentence[i]==' ' && sentence[i-1]!=' ')
            word++;
        else if(sentence[i]==NULL && sentence[i-1]!=' ')
            word++;
    }
    cout << "This sentence has " << word << " words. ";
}

//The program counts how many words there are in 
//user input sentence