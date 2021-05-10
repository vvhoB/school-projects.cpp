#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

struct student_data
{
    string first_name;
    string last_name;
    string Class;
};

void save()
{
    fstream ofile;
    ofile.open("student-database.txt", ios::out | ios::app);
    student_data student;
    cout << "First name: ";
    cin >> student.first_name;
    cout << "Last name: ";
    cin >> student.last_name;
    cout << "Class: ";
    cin >> student.Class;
    ofile << student.first_name << " " << student.last_name << " " << student.Class << endl;
    ofile.close();
}

void print()
{
    fstream ifile;
    student_data student[1000];
    ifile.open("student-database.txt", ios::in);
    int n=0, i=0;
    while(!ifile.eof())
    {
        ifile >> student[n].first_name;
        ifile >> student[n].last_name;
        ifile >> student[n].Class;
        n++;
    }
    while(i<n-1)
    {
        cout << i+1 << ". " <<  student[i].first_name << " ";
        cout << student[i].last_name << " ";
        cout << student[i].Class << endl;
        i++;
    }
    ifile.close();
}

int main()
{
    char chara;
    do
    {
    cout << "------------------" << endl;
    cout << "Save to DB - [z]" << endl;
    cout << "Print DB - [o]" << endl;
    cout << "Exit - [q]" << endl;
    cout << "------------------" << endl;
        chara=getch();
        switch(chara)
        {
            case 'z': save(); break;
            case 'o': print(); break;
            case 'q': cout << "End of the program. "; break;
            default: cout << "Enter valid character!"; break;
        }
    } while(chara!='q');
}


//getch nie trzeba potwierdzac enterem
//biblio conio.h

