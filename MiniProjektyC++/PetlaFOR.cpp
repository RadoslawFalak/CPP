#include <iostream>

using namespace std;

string imie;
int liczba;

int main ()
{
    cout<< "Podaj imie: ";
    cin>> imie;
    cout<< "Podaj dodatnia liczbe calkowita: ";
    cin>> liczba;
        for (int i = 1; i <= liczba; i++) 
        {
            cout<< i <<"." <<imie <<endl;
        }
    if (liczba <= 0) 
    {
        cout<< "Podana liczba nie spelnia kryteriow." <<endl;
    }
}