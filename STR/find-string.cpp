#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    cout << "Wprowadz zdanie: ";
    char zdanie[1000];
    cin.getline(zdanie, 1000);
    cout << "Wprowadz wzorzec: ";
    char wzorzec[50];
    cin.getline(wzorzec,50);
    int zdanie_dl = strlen(zdanie);
    int wzorzec_dl = strlen(wzorzec);
    int spacje=0;
    for(int i=0; i<zdanie_dl; i++)
    {
        if(zdanie[i]==' ')
        { 
            for(int j=i; j<zdanie_dl; j++)
            {    
                zdanie[j]=zdanie[j+1];
            }       
            spacje++;
        }    
    }
    //teraz text jest jednym chunk of text, bez spacji.
    zdanie_dl-=spacje;
    //dlugosc zdania sie zmienia, po odjeciu od niego spacji (one nadal tam sa btw)
    int count=0;
    char porownanie[wzorzec_dl];
    for(int i=0; i<zdanie_dl; i++)
    {
        //wartosc j jebie wszystko, bo w koncu i>wz-dl i sie terminuje, bo jest wieksze, nie wykonuje sie. i tu jest rozwiazanie.
        for(int j=0; j<wzorzec_dl; j++)
        {
            porownanie[j]=zdanie[j+i];
            //co drugie porownanie artefakty produkuje, powtarzajace sie litery, ale miedzy nimi sa tez dobre odpowiedzi co zawsze chyba da pozytywny wynik???
            //highly unlikely zeby sie powtorzylo tak zeby slowo wyszlo
            cout << porownanie << endl;
        }        
        float if_equal = strcmp(porownanie, wzorzec);
        if(if_equal==0) count++;
    }
    cout << "W tekscie '" << wzorzec <<"' pojawia sie " << count <<" razy.";
}
    //wogole 0 bedzie jak wiecej niz jedno slowo wbijesz we wzorzec bo spacje usunalem nie wiedziec po chuj
    //dodawac od i litery do wzorzec_dl, robic z tego nowy string i porownywac?


    //HALO JAKBY CO TO CHODZI ZE SE WBIJASZ TEKST I JAKIES SLOWO I CI MOWI ILE RAZY W TEKSCIE SIE POJAWILO ;))