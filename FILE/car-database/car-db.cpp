#include <iostream>
#include <fstream>
#include <conio.h>
#include <utility>
using namespace std;

struct car_data
{
    string make;
    string model;
    int man_year;
    int eng_pwr;
    float eng_cap;
    int max_spd;
};

void read(car_data car[], unsigned &n)
{
    int i = 0;
    n = 0;
    fstream ifile;
    ifile.open("car-db.txt", ios::in);
    while (!ifile.eof())
    {
        ifile >> car[i].make;
        ifile >> car[i].model;
        ifile >> car[i].man_year;
        ifile >> car[i].eng_pwr;
        ifile >> car[i].eng_cap;
        ifile >> car[i].max_spd;
        i++;
        n++;
    }
    ifile.close();
}

void save(car_data car[], unsigned &n)
{
    read(car, n);
    fstream ofile;
    ofile.open("car-db.txt", ios::out);
    for (int i = 0; i < n; i++)
    {
        ofile << car[i].make << endl;
        ofile << car[i].model << endl;
        ofile << car[i].man_year << endl;
        ofile << car[i].eng_pwr << endl;
        ofile << car[i].eng_cap << endl;
        if (i == n - 1)
            ofile << car[i].max_spd;
        else
            ofile << car[i].max_spd << endl;
    }
    ofile.close();
}

void app(car_data car[], unsigned &n)
{
    read(car, n);
    cout << "How many entries? ";
    int ent;
    cin >> ent;
    cout << "\n";
    for (int i = n; i < ent + n; i++)
    {
        cout << i + 1 << ". " << endl;
        cout << "   Make: ";
        cin >> car[i].make;
        cout << "   Model: ";
        cin >> car[i].model;
        cout << "   Year of manufacture: ";
        cin >> car[i].man_year;
        cout << "   Engine power: ";
        cin >> car[i].eng_pwr;
        cout << "   Engine capacity: ";
        cin >> car[i].eng_cap;
        cout << "   Maximum speed: ";
        cin >> car[i].max_spd;
        cout << "\n";
    }
    cout << "Apply changes? [y/n]" << endl;
    if (getch() == 'y')
    {
        n += ent;
        save(car, n);
        cout << "Changes applied succesfully." << endl;
    }
}

void print(car_data car[], unsigned n)
{
    read(car, n);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << endl;
        cout << "   Make: ";
        cout << car[i].make << endl;
        cout << "   Model: ";
        cout << car[i].model << endl;
        cout << "   Year of manufacture: ";
        cout << car[i].man_year << endl;
        cout << "   Engine power: ";
        cout << car[i].eng_pwr << endl;
        cout << "   Engine capacity: ";
        cout << car[i].eng_cap << endl;
        cout << "   Maximum speed: ";
        cout << car[i].max_spd << endl;
    }
}

void printSelect(car_data car[], int num)
{
    cout << "\n";
    cout << num + 1 << ". " << endl;
    cout << "   Make: ";
    cout << car[num].make << endl;
    cout << "   Model: ";
    cout << car[num].model << endl;
    cout << "   Year of manufacture: ";
    cout << car[num].man_year << endl;
    cout << "   Engine power: ";
    cout << car[num].eng_pwr << endl;
    cout << "   Engine capacity: ";
    cout << car[num].eng_cap << endl;
    cout << "   Maximum speed: ";
    cout << car[num].max_spd << endl;
    cout << "\n";
}

void mod(car_data car[], unsigned &n)
{
    read(car, n);
    cout << "Enter data number: ";
    int num;
    cin >> num;
    if (num > n || num <= 0)
    {
        cout << "No such element, try again. " << endl;
    }
    else
    {
        num--;
        printSelect(car, num);
        char menu;
        do
        {
            cout << "------------------" << endl;
            cout << "Change make - [k]" << endl;
            cout << "Change model - [m]" << endl;
            cout << "Change yom - [y]" << endl;
            cout << "Change engine power - [p]" << endl;
            cout << "Change engine capacity - [c]" << endl;
            cout << "Change max speed - [x]" << endl;
            cout << "\nSwitch data - [s]" << endl;
            cout << "Quit - [q]" << endl;
            cout << "------------------" << endl;
            menu = getch();
            switch (menu)
            {
            case 's':
                cout << "Enter data number: ";
                cin >> num;
                num--;
                if (num > n || num <= 0)
                {
                    cout << "No such element, try again. " << endl;
                }
                else
                    printSelect(car, num);
                break;
            case 'k':
                cout << "New Make: ";
                cin >> car[num].make;
                break;
            case 'm':
                cout << "New Model: ";
                cin >> car[num].model;
                break;
            case 'y':
                cout << "New Year of manufacture: ";
                cin >> car[num].man_year;
                break;
            case 'p':
                cout << "New Engine power: ";
                cin >> car[num].eng_pwr;
                break;
            case 'c':
                cout << "New Engine capacity: ";
                cin >> car[num].eng_cap;
                break;
            case 'x':
                cout << "New Max speed: ";
                cin >> car[num].max_spd;
                break;
            case 'q':
                cout << "Apply changes? [y/n]" << endl;
                if (getch() == 'y')
                {
                    save(car, n);
                    cout << "Changes applied succesfully. " << endl;
                }
                break;
            default:
                cout << "Enter proper character!" << endl;
                break;
            }
        } while (menu != 'q');
    }
}

void del(car_data car[], unsigned &n)
{
    read(car, n);
    cout << "Enter data number: ";
    int num;
    cin >> num;
    if (num > n || num < 0)
    {
        cout << "No such element, try again" << endl;
    }
    else
    {
        num--;
        printSelect(car, num);
        cout << "Are you sure you want to delete this item? [y/n]" << endl;
        if (getch() == 'y')
        {
            for (int i = 0; i < n; i++)
            {
                if (i == num)
                {
                    for (int j = i; j < (n - 1); j++)
                    {
                        car[j].make = car[j + 1].make;
                        car[j].model = car[j + 1].model;
                        car[j].man_year = car[j + 1].man_year;
                        car[j].eng_pwr = car[j + 1].eng_pwr;
                        car[j].eng_cap = car[j + 1].eng_cap;
                        car[j].max_spd = car[j + 1].max_spd;
                    }
                }
            }
            n--;
            cout << "Item deleted succesfully." << endl;
            save(car, n);
        }
    }
}

void search(car_data car[], unsigned &n)
{
    string search;
    char sign;
    int crit;
    int found = 0;
    read(car, n);
    cout << "Search for?" << endl;
    cout << "------------------" << endl;
    cout << "Search for Make - [k]" << endl;
    cout << "Search for Model - [m]" << endl;
    cout << "Search for YoM - [y]" << endl;
    cout << "Search for engine power - [p]" << endl;
    cout << "Search for engine capacity - [c]" << endl;
    cout << "Search for max speed - [x]" << endl;
    cout << "------------------" << endl;
    char option;
    option = getch();
    switch (option)
    {
    case 'k':
        cout << "Enter search phrase: ";
        cin >> search;
        for (int i = 0; i < n; i++)
        {
            if (car[i].make == search)
            {
                printSelect(car, i);
                found++;
            }
        }
        if (found == 0)
        {
            cout << "No matches found. " << endl;
        }
        break;
    case 'm':
        cout << "Enter search phrase: ";
        cin >> search;
        for (int i = 0; i < n; i++)
        {
            if (car[i].model == search)
            {
                printSelect(car, i);
                found++;
            }
        }
        if (found == 0)
        {
            cout << "No matches found. " << endl;
        }
        break;
    case 'y':
        cout << "Enter the criterion: ";
        cin >> crit;
        cout << "\n";
        cout << "Enter sign [=/</>]" << endl;
        sign = getch();
        switch (sign)
        {
        case '>':
            for (int i = 0; i < n; i++)
            {
                if (car[i].man_year > crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        case '=':
            for (int i = 0; i < n; i++)
            {
                if (car[i].man_year == crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        case '<':
            for (int i = 0; i < n; i++)
            {
                if (car[i].man_year < crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        default:
            cout << "Enter proper character, try again." << endl;
            break;
        }
        break;
    case 'p':
        cout << "Enter the criterion: ";
        cin >> crit;
        cout << "\n";
        cout << "Enter sign [=/</>]" << endl;
        sign = getch();
        switch (sign)
        {
        case '>':
            for (int i = 0; i < n; i++)
            {
                if (car[i].eng_pwr > crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        case '=':
            for (int i = 0; i < n; i++)
            {
                if (car[i].eng_pwr == crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        case '<':
            for (int i = 0; i < n; i++)
            {
                if (car[i].eng_pwr < crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        default:
            cout << "Enter proper character, try again." << endl;
            break;
        }
        break;
    case 'c':
        cout << "Enter the criterion: ";
        cin >> crit;
        cout << "\n";
        cout << "Enter sign [=/</>]" << endl;
        sign = getch();
        switch (sign)
        {
        case '>':
            for (int i = 0; i < n; i++)
            {
                if (car[i].eng_cap > crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        case '=':
            for (int i = 0; i < n; i++)
            {
                if (car[i].eng_cap == crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        case '<':
            for (int i = 0; i < n; i++)
            {
                if (car[i].eng_cap < crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        default:
            cout << "Enter proper character, try again." << endl;
            break;
        }
        break;
    case 'x':
        cout << "Enter the criterion: ";
        cin >> crit;
        cout << "\n";
        cout << "Enter sign [=/</>]" << endl;
        sign = getch();
        switch (sign)
        {
        case '>':
            for (int i = 0; i < n; i++)
            {
                if (car[i].max_spd > crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        case '=':
            for (int i = 0; i < n; i++)
            {
                if (car[i].max_spd == crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        case '<':
            for (int i = 0; i < n; i++)
            {
                if (car[i].max_spd < crit)
                {
                    printSelect(car, i);
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "No matches found. " << endl;
            }
            break;
        default:
            cout << "Enter proper character, try again." << endl;
            break;
        }
        break;
    default:
        cout << "Enter proper character, try again." << endl;
        break;
    }
}
//ujednolicic
//upper & lowercase, wiecej niz 1 wyraz w nazwie getliney

void sort(car_data car[], unsigned &n)
{
    read(car, n);
    cout << "Sort by?" << endl;
    cout << "------------------" << endl;
    cout << "Sort by Make - [k]" << endl;
    cout << "Sort by YoM - [y]" << endl;
    cout << "Sort by Engine power - [p]" << endl;
    cout << "------------------" << endl;
    char option;
    option = getch();
    switch (option)
    {
    case 'k':
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (car[j].make > car[j + 1].make)
                {
                    swap(car[j].make, car[j + 1].make);
                    swap(car[j].model, car[j + 1].model);
                    swap(car[j].man_year, car[j + 1].man_year);
                    swap(car[j].eng_pwr, car[j + 1].eng_pwr);
                    swap(car[j].eng_cap, car[j + 1].eng_cap);
                    swap(car[j].max_spd, car[j + 1].max_spd);
                }
            }
        }
        cout << "File sorted succesfully. " << endl;
        break;
    case 'y':
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (car[j].man_year > car[j + 1].man_year)
                {
                    swap(car[j].make, car[j + 1].make);
                    swap(car[j].model, car[j + 1].model);
                    swap(car[j].man_year, car[j + 1].man_year);
                    swap(car[j].eng_pwr, car[j + 1].eng_pwr);
                    swap(car[j].eng_cap, car[j + 1].eng_cap);
                    swap(car[j].max_spd, car[j + 1].max_spd);
                }
            }
        }
        cout << "File sorted succesfully. " << endl;
        break;
    case 'p':
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (car[j].eng_pwr > car[j + 1].eng_pwr)
                {
                    swap(car[j].make, car[j + 1].make);
                    swap(car[j].model, car[j + 1].model);
                    swap(car[j].man_year, car[j + 1].man_year);
                    swap(car[j].eng_pwr, car[j + 1].eng_pwr);
                    swap(car[j].eng_cap, car[j + 1].eng_cap);
                    swap(car[j].max_spd, car[j + 1].max_spd);
                }
            }
        }
        cout << "File sorted succesfully. " << endl;
        break;
    default:
        cout << "Enter proper character. " << endl;
        break;
    }
}
//nagle przestalo dzialac

int main()
{
    car_data car[500];
    unsigned n = 0;
    char menu;
    do
    {
        cout << "------------------" << endl;
        cout << "Save database - [s]" << endl;
        cout << "Append new elements - [a]" << endl;
        cout << "Print database - [p]" << endl;
        cout << "Modify data - [m]" << endl;
        cout << "Delete data - [d]" << endl;
        cout << "Search data - [f]" << endl;
        cout << "Sort data - [b]" << endl;
        cout << "Exit - [q]" << endl;
        cout << "------------------" << endl;
        menu = getch();
        switch (menu)
        {
        case 's':
            save(car, n);
            break;
        case 'a':
            app(car, n);
            break;
        case 'p':
            print(car, n);
            break;
        case 'm':
            mod(car, n);
            break;
        case 'd':
            del(car, n);
            break;
        case 'f':
            search(car, n);
            break;
        case 'b':
            sort(car, n);
            break;
        case 'q':
            cout << "End of the program. ";
            break;
        default:
            cout << "Enter proper character!" << endl;
            break;
        }
    } while (menu != 'q');
}

//& - kiedy nie bedzie zmieniana wartosc zmiennej
//getliney i cingety w miejscach w ktorych moze byc np model 2 wyrazowy