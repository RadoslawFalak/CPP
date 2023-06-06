#include <iostream>

using namespace std;

string login, haslo;

int main () {

    cout << "Podaj login: ";
    cin >> login;

    cout << "Podaj haslo: ";
    cin >> haslo;

    if ((login == "admin") && (haslo == "admin")) 
    {
        cout << "Poprawne logowanie";
    }

    else 
    {
        cout << "Nie poprawny login lub haslo";
    }
    return 0;
}