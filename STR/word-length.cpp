#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int length = word.length();
    cout << "This word is " << length << " characters long. ";
}

//The program takes a word and prints out
//its length