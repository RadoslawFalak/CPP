#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int liczba;

int main () 
{
    cout<< "Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady";
    usleep(3000000);
    cout<<endl;

    srand(time(NULL));
    for (int i = 1; i <= 6; i++)
    {
        liczba = rand()%49+1;
        usleep(1000000);
        cout<< liczba <<"\a" <<endl;
    }

    return 0;
}