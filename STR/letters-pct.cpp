#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    string text;
    cout << "Enter a text: ";
    getline(cin, text);
    unsigned length = text.length();
    unsigned space=0;
    for(int i=0; i<length; i++)
        if(text[i]==' ')
            space++;
    unsigned count=0;
    for(char letter='a'; letter<='z'; letter++)
    {
        count=0;
        for(int i=0;i<length;i++)
        {
            if(text[i]==letter)
                count++;
        }
        cout << setprecision(4) << letter << " = "<< float(count)/(length-space)*100 << "%" << endl;
    }
}

//The program takes a text and then prints out 
//how many percent of it each letter of the alphabet takes