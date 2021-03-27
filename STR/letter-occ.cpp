#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout << "Enter a sentence: ";
    string text;
    getline(cin, text);
    cout << "Enter a letter: ";
    char letter;
    cin >> letter;
    int length = text.length();
    int count=0;
    for(int i=0; i<length; i++)
    {
        if(text[i]==letter) count++;
    }
    cout << "The letter " << "'" << letter << "'" << " showed up " << count << " times.";
}

//The program takes a sentence and a single letter
//and then prints out how many times that letter had occured
