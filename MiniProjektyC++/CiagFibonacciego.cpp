#include <iostream>

using namespace std;

int fib[100000];
int n;

int main() 
{

    cout << "Ile liczb Fibonacciego mam wyznaczyć: ";
    cin >> n;

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl << "wyraz nr" << i + 1 << ": " << fib[i];
    }
    return 0;
}