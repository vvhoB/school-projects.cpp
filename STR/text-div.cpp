#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout << "Enter a text: ";
    string text;
    getline(cin, text);
    cout << "Enter the number of words in a line: ";
    unsigned n;
    cin >> n;
    int length=text.length();
    int space=0;
    for(int i=0; i<length; i++)
    {
        cout << text[i];
        if(text[i]==' ') space++;
        if(space==n) 
        {
            cout << "\n";
            space=0;
        }
    }
}

//The program takes a text and a number 'n' and
//prints it out with 'n' number of words in each line 