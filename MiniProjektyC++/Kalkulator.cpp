#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;
float x ,y;
char wybor;
int main () 
{
for ( ; ;)
{
    cout <<endl << "Podaj 1 liczbe: ";
    cin >> x;
    cout << "Podaj 2 liczbe: ";
    cin >> y;

    cout << "MENU GLOWNE" << endl;
    cout << "____________" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Koniec programu" << endl;
    cin >> wybor;

    switch(wybor) 
    {
    case '1': 
            cout << "Suma = " << x + y;
    break;

    case '2': 
            cout << "Roznica = " << x - y;
    break;

    case '3': 
            cout << "Iloczyn = " << x * y;
    break;

    case '4':
            if (y == 0) cout << "Nie dzielimy przez zero!";
            else cout << "Iloraz = " << x / y;
    break;

    case '5':
            exit(0);
    break;

    default: cout << " Nie ma tkiej opcji w menu!";
    }
    getchar(); getchar();
    system("clear");
    
}
    return 0;
}