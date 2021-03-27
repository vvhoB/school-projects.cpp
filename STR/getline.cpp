#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentence;
    cout << "Wprowadz dowolne zdanie: ";
    getline(cin, sentence);
    cout << "Wprowadzone zdanie: " << sentence;
}

//Shows the function of getline()