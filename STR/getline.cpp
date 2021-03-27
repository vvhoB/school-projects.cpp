#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Your sentence: " << sentence;
}

//The program shows the function of getline()
//It lets the user input an entire line of text
//not only a single word, like cin does 
