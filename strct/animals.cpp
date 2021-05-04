#include<iostream>
using namespace std;

struct purch_date 
{
    unsigned day;
    unsigned month;
    unsigned year;
};

struct animal_data
{
    string the_animal;
    float weight;
    unsigned age;
    purch_date date;
};

int main()
{
    animal_data animals[5];
    animals[0]={"Cow", 720, 600, 24, 4, 2008};
    animals[1]={"Goat", 100, 540, 23, 2, 2009};
    animals[2]={"Chicken", 0.5, 120, 23, 2, 2009};
    animals[3]={"Pig", 350, 340, 6, 5, 2002};
    animals[4]={"Dog", 25, 300, 6, 5, 2002};
    for(int i=0; i<5; i++)
    {
        cout << animals[i].the_animal << endl;
        cout << "Weight: " << animals[i].weight << endl;
        cout << "Age in weeks: " << animals[i].age << endl;
        cout << "Purchase date: " << animals[i].date.day << "/" << animals[i].date.month << "/" << animals[i].date.year << endl;
        cout << "\n";
    }
}
