#include<iostream>
#include<string>
using namespace std;

struct city
{
    string name;
    string country;
    bool is_capital;
    float area;
    float pop;
};

int main()
{
    city arr[10];
    for(int i=1; i<11; i++)
    {
        cout << "City[" << i << "]: " << endl;
        cout << "Name: ";
        getline(cin, arr[i].name);
        cout << "Country: ";
        getline(cin, arr[i].country);
        cout << "Capital?(0/1): ";
        cin >> arr[i].is_capital;
        cout << "Area: ";
        cin >> arr[i].area;
        cout << "Population: ";
        cin >> arr[i].pop;
        cin.get();
        cout << "\n";
    }
    for(int i=1; i<11; i++)
    {
        cout << "City[" << i << "]: " << endl;
        cout << "---------------" << endl;
        cout << arr[i].name << endl;
        cout << arr[i].country << endl;
        if(arr[i].is_capital) cout << "IS the capital.";
            else cout << "IS NOT the capital";
        cout << arr[i].area << endl;
        cout << arr[i].pop << endl;
        cout << "\n";
    }
}
