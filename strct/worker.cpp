#include<iostream>
using namespace std;

struct employ_date
{
    unsigned day;
    unsigned month;
    unsigned year;
};

struct worker_data
{
    string first_name;
    string last_name;
    employ_date date;
};

int main()
{
    worker_data worker;
    cout << "Enter worker data: " << endl;
    cout << "First name: ";
    cin >> worker.first_name;
    cout << "Last name: ";
    cin >> worker.last_name;
    cout << "Employment date: ";
    cin >> worker.date.day >> worker.date.month >> worker.date.year;
    cout << "\n";
    cout << "Worker data: " << endl;
    cout << "First name: " << worker.first_name << endl;
    cout << "Last name: " << worker.last_name << endl;
    cout << "Employment date: " << worker.date.day << "/" << worker.date.month << "/" << worker.date.year; 
    return 0;
}   