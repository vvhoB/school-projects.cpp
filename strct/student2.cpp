#include<iostream>
#include<cstring>
using namespace std;

struct adress
{
    char street[40];
    char house[8];
    char postcode[7];
    char city[50];
};

struct student_data
{
   char first_name[30];
   char last_name[40];
   adress adress;
   char phonenum[10];
};

int main()
{
    cout << "Enter n: ";
    unsigned n;
    cin >> n;
    student_data arr[n];
    cout << "Enter student data: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Student nr. " << i+1 << ":" <<endl;
        cout << "Enter first_name: ";
        cin >> arr[i].first_name;
        cout << "Enter last_name: ";
        cin >> arr[i].last_name;
        cout << "Enter street name: ";
        cin.getline(arr[i].adress.street, 40);
        cout << "Enter house number: ";
        cin.getline(arr[i].adress.house, 8);
        cout << "Enter post code: ";
        cin >> arr[i].adress.postcode;
        cout << "Enter city: ";
        cin.getline(arr[i].adress.city, 50);
        cout << "Enter phone number: ";
        cin >> arr[i].phonenum;
    }

    for(int i=0; i<=n; i++)
    {
        cout << "--------------------------------------------" << endl;
        cout << "Student nr: " << i+1 << ":" <<endl;
        cout << "First name: " << arr[i].first_name << endl;
        cout << "Last name: " << arr[i].last_name << endl;
        cout << "Street: " << arr[i].adress.street << endl;
        cout << "House nr.: " << arr[i].adress.house << endl;
        cout << "Post code: " << arr[i].adress.postcode << endl;
        cout << "City: " << arr[i].adress.city << endl;
        cout << "Phone number : " << arr[i].phonenum << endl;
    }  
}