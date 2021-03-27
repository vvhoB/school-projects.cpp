#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    unsigned key;
    cout << "Enter the cipher key: ";
    cin >> key;
    int length = text.length();
    cout << "Ciphered sentence: ";
    for(int i=0; i<length; i++)
    {
        if(text[i]!=' ')
            text[i]=text[i]+key;
        cout << text[i];
    }
}

//The program ciphers user input sentence and prints out the result
//It uses the ceasar cipher so it moves the 'values' of characters in the 
//alphabet by a fixed number here also given by the user