#include<iostream>
using namespace std;

struct student_data
{
    string first_name;
    string last_name;
    unsigned wiek;
};

int main()
{
    student_data me;
    cout << "Enter student data: ";
    cout << "First name: ";
    cin >> me.first_name;
    cout << "Last name: ";
    cin >> me.last_name;
    cout << "Age: ";
    cin >> me.wiek;
    cout << "\n";
    cout << "Student data: " << endl;
    cout << "First name: "<< me.first_name << endl;
    cout << "Last name: "<< me.last_name << endl;
    cout << "Age: "<< me.wiek << endl;
}
