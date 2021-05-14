#include<iostream>
#include<fstream>
#include<conio.h>
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

void new_db(car_data car[], unsigned &n, bool &changes)
{

}

void save(car_data car[], unsigned &n, bool &changes)
{
    fstream ofile;
    ofile.open("car-db.txt", ios::out);
    for(int i=0; i<n; i++)
    {
        ofile << car[i].make << endl;
        ofile << car[i].model << endl;
        ofile << car[i].man_year << endl;
        ofile << car[i].eng_pwr << endl;
        ofile << car[i].eng_cap << endl;
        if(i==n-1) ofile << car[i].max_spd;
        else ofile << car[i].max_spd << endl;
    }
    ofile.close();
}

void read(car_data car[], unsigned &n, bool &changes)
{
    int i=0;
    n=0;
    fstream ifile;
    ifile.open("car-db.txt", ios::in);
    while(!ifile.eof())
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

void app(car_data car[], unsigned &n, bool &changes)
{
    fstream ofile;
    ofile.open("car-db.txt", ios::out | ios::app);
    cout << "How many entries? ";
    int ent_q;
    cin >> ent_q; 
    ent_q+=n;
    cout << "\n";
    for(int i=n; i<ent_q; i++)
    {
        cout << "Make: ";
        cin >> car[i].make;
        ofile << endl << car[i].make << endl;
        
        cout << "Model: ";
        cin >> car[i].model;
        ofile << car[i].model << endl;
        
        cout << "Year of manufacture: ";
        cin >> car[i].man_year;
        ofile << car[i].man_year << endl;
        
        cout << "Engine power: ";
        cin >> car[i].eng_pwr;
        ofile << car[i].eng_pwr << endl;
        
        cout << "Engine capacity: ";
        cin >> car[i].eng_cap;
        ofile << car[i].eng_cap << endl;
        
        cout << "Maximum speed: ";
        cin >> car[i].max_spd;
        if(i==(ent_q-1)) ofile << car[i].max_spd;
        else ofile << car[i].max_spd << endl;

        cout << "\n";
    }
    ofile.close();
    read(car, n, changes);
    changes=true;
    //app od razu zapisuje zmiany i wbija je do pliku, bez potwierdzania savem - czy to dobrze?
    //co, jak nie chcesz zapisac nowo zappendowanych danych - problem.
    //tak juz musi byc.
}

void print(car_data car[], unsigned n, bool changes)
{
    read(car, n, changes);
    for(int j=0; j<n; j++)
    {
        cout << j+1 << ". " << endl;  
        cout << "   Make: ";
        cout << car[j].make << endl;
        
        cout << "   Model: ";
        cout << car[j].model << endl;

        cout << "   Year of manufacture: ";
        cout << car[j].man_year << endl;

        cout << "   Engine power: ";
        cout << car[j].eng_pwr << endl;

        cout << "   Engine capacity: ";
        cout << car[j].eng_cap << endl;

        cout << "   Maximum speed: ";
        cout << car[j].max_spd << endl;
    }
}

void mod(car_data car[], unsigned &n, bool &changes)
{
    read(car, n, changes);
    cout << "Enter the number of the data that you wish modify: ";
    unsigned index;
    cin >> index;
    index--;
    cout << "\n";
    cout << index+1 << ". " << endl;
    
    cout << "   Make: ";
    cout << car[index].make << endl;
    
    cout << "   Model: ";
    cout << car[index].model << endl;

    cout << "   Year of manufacture: ";
    cout << car[index].man_year << endl;

    cout << "   Engine power: ";
    cout << car[index].eng_pwr << endl;

    cout << "   Engine capacity: ";
    cout << car[index].eng_cap << endl;

    cout << "   Maximum speed: ";
    cout << car[index].max_spd << endl;
    
    cout << "\n";
    cout << "Change make - [k]" << endl;
    cout << "Change model - [m]" << endl;
    cout << "Change yom - [y]" << endl;
    cout << "Change engine power - [p]" << endl;
    cout << "Change engine capacity - [c]" << endl;
    cout << "Change max speed - [s]" << endl;
    cout << "\n";
    char which;
    which=getch();
    switch(which)
    {    
        case 'k': 
            cout << "New Make: ";
            cin >> car[index].make; 
            break;
        case 'm': 
            cout << "New Model: ";
            cin >> car[index].model; 
            break;
        case 'y':
            cout << "New Year of manufacture: ";
            cin >> car[index].man_year; 
            break;
        case 'p': 
            cout << "New Engine power: ";
            cin >> car[index].eng_pwr; 
            break;
        case 'c': 
            cout << "New Engine capacity: ";
            cin >> car[index].eng_cap; 
            break;
        case 's': 
            cout << "New Max speed: ";
            cin >> car[index].max_spd; 
            break;
        default: cout << "Enter proper character!" << endl; break;
    }
    save(car, n, changes);
    cout << "\n";
    //menu w petli bo jak default to sie wylacza.
    //zeby wyswietlalo jeszcze raz jak zrobi sie default
    //tylko jedna zmiana naraz, potem wyrzuca, moze to jakos zrobic
    //usprawnienia menu??
}

void del(car_data car[], unsigned &n, bool &changes)
{

}

void search(car_data car[], unsigned n)
{

}

void sort(car_data car[], unsigned n, bool &changes)
{

}

int main()
{
    car_data car[500];
    unsigned n=0;
    char menu;
    bool changes=false;
    do
    {
        cout << "------------------" << endl;
        cout << "New database - [n]" << endl;
        cout << "Save database - [s]" << endl;
        cout << "Read database - [r]" << endl;
        cout << "Append new elements - [a]" << endl;
        cout << "Print database - [p]" << endl;
        cout << "Modify data - [m]" << endl;
        cout << "Delete data - [d]" << endl;
        cout << "Search data - [f]" << endl;
        cout << "Sort data - [b]" << endl;
        cout << "Exit - [q]" << endl;
        cout << "------------------" << endl;
            menu=getch();
            switch(menu)
            {
                case 'n': new_db(car, n, changes); break;
                case 's': save(car, n, changes); break;
                case 'r': read(car, n, changes); break;
                case 'a': app(car, n, changes); break;
                case 'p': print(car, n, changes); break;
                case 'm': mod(car, n, changes); break;
                case 'd': del(car, n, changes); break;
                case 'f': search(car, n); break;
                case 'b': sort(car, n, changes); break;
                case 'q': cout << "End of the program. "; break;
                default: cout << "Enter proper character!"; break;
            }
    }while(menu!='q');
    if(changes)
    {
        cout << "Save changes? [y/n]";
        if(getch()=='y') save(car, n, changes);
    }
}

//& - kiedy nie bedzie zmieniana wartosc zmiennej
//zrobic zeby po readzie i innych co nic nie wyswietlajo jeszcze raz menu sie
//nie wyswietlalo bo po co i brzydko wyglada.
//read w menu jest useless?