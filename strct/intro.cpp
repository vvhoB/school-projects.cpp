#include<iostream>
using namespace std;

struct User
{
    string first_name;
    string last_name;
    unsigned age;
};

int main()
{
    User user;
    user.first_name = "Hubert";
    user.last_name = "Nowak";
    user.age = 18;
    cout << "First name: " << user.first_name << endl;
    cout << "Last name: " << user.last_name << endl;
    cout << "Age: " << user.age << endl;
    return 0;
}

