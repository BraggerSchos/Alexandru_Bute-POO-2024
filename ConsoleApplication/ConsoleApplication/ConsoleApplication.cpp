#include "pch.h"
#include <iostream>
using namespace System; // pentru Visual C++/CLI
using namespace std; // pentru biblioteci cu funcii standard, cunoscute din C++
// de citit despre modificatorii private, public, protected
struct Persoana
{
    unsigned vs;
    char nume[20];
    char prenume[20];
};
class Pers
{
private:
    unsigned vs;
    char nume[20];
    char prenume[20];
public:
    // 2 metode cu acelasi nume cu cel al clasei, adica Pers
    // o metoda cu parmas si una fara parmas
    Pers(unsigned vs1, char* num1, char* prenum1)
    {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned arata_vs() { return this->vs; }
    char* arata_nume() { return this->nume; }
};
int main()
{
    Console::WriteLine("Introduceti numarul de persoane: ");
    int nr_persoane;
    cin >> nr_persoane;
    Persoana* persoane = new Persoana[nr_persoane];
    for (int i = 0; i < nr_persoane; i++) {
        Console::WriteLine("Introduceti numele persoanei {0}: ", i + 1);
        char nume[20];
        cin >> nume;
        Console::WriteLine("Introduceti prenumele persoanei {0}: ", i + 1);
        char prenume[20];
        cin >> prenume;
        strcpy_s(persoane[i].nume, 20, nume);
        strcpy_s(persoane[i].prenume, 20, prenume);
        Console::WriteLine("Introduceti varsta persoaeni {0}: ", i + 1);
        unsigned vs;
        cin >> vs;
        persoane[i].vs = vs;
    }
    Console::WriteLine("Introduceti numele persoanelor si varstale aferente: "); //Specific Visual C++ / CLI
    for (int i = 0; i < nr_persoane; i++) {
        cout << persoane[i].nume << " " << persoane[i].prenume << "\t" << persoane[i].vs << endl;
        }
    Console::ReadKey(); //Mentinem fereastra deschisa
}   
