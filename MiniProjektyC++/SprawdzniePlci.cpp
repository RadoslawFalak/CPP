#include <iostream>
#include <string>
using namespace std;

string imie;


int main () 
{
    cout << "Podaj swoje imie: ";
    cin >> imie;

    int dlugosc = imie.length();

    if (imie[dlugosc-1] == 'a')
    {
        cout << "Wydaje mi sie ze jestes kobieta.";
    }
    else
        cout << "Wydaje mi sie ze jestes mezczyzna.";

    return 0;
}