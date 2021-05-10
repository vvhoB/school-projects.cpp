#include<iostream>
#include<string>
using namespace std;

bool are_equal(string word1, string word2, int length1)
{
    if(word1==word2) return true;        
    else return false;
}

int main()
{
    string word1, word2;
    cout << "Enter 1st word: ";
    cin >> word1;
    cout << "Enter 2nd word: ";
    cin >> word2;
    int length1=word1.length();
    int length2=word2.length();
    if (length1!=length2)
    {
        cout << "These two words aren't anagrams";
        return 0;
    }
    char p;
    for (int i=0; i<length1; i++) 
    {
        for (int j=0; j<length1-i-1; j++) 
        {
            if (word1[j]>word1[j+1]) 
            {
                p=word1[j];
                word1[j]=word1[j+1];
                word1[j+1]=p;
            }
        }
    }
    for (int i=0; i<length2; i++) 
    {
        for (int j=0; j<length2-i-1; j++) 
        {
            if (word2[j]>word2[j+1]) 
            {
                p=word2[j];
                word2[j]=word2[j+1];
                word2[j+1]=p;
            }
        }
    }
    if(are_equal(word1, word2, length1)) cout << "These two words are anagrams. ";
        else cout << "These two words aren't anagrams. ";
}
