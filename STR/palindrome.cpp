#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(string palindrome);

int main()
{
    string palindrome;
    cout << "Enter a word: ";
    cin >> palindrome;
    if(is_palindrome(palindrome)) cout << "This word is a palindrome.";
    else cout << "This word isn't a palindrome.";
}

bool is_palindrome(string palindrome)
{
    int length=palindrome.length();
    for(int i=0; i<length/2; i++)
    {
        if(palindrome[i]!=palindrome[length-1-i]) return false;
        return true;
    }
}

//The program takes a word and checks if its a palindrome
//prints out the answer