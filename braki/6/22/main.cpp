#include <iostream>
#include <string.h>
using namespace std;

void czytaj_dane(int *n, int *X)
{

	for (int i = 0; i < *n; i++)
	{
	    int tmp;
		cout << "podaj X nr " << i+1 << endl;
		cin >> tmp;
        X[i] = tmp;
	}
    cout << "Wynik: " << endl;
}

void srednia_min_max (int *n, int *X)
{
    int min = 0;
    int max = 0;
   for (int i = 1; i < *n; i++)
	{
		if(X[i] < X[min])
        {
            min = i;
		} else if (X[i] > X[max])
		{
		    max = i;
		}
	}
	int start, stop;
	if (min > max)
    {
        start = max;
        stop = min;
    } else
    {
        start = min;
        stop = max;
    }
    int ilosc = 0, wynik = 0;
    for(int i = start; i<=stop; i++, ilosc++) {
        wynik += X[i];
    }
    wynik = wynik/ilosc;
    cout << "Wynik: " << wynik << endl;
}

int main()
{
	int *X;
	int n;

    do
	{
		cout << "Podaj rozmiar ciagu " << endl;
		cin >> n;
	} while (n <= 0 || n > 20);
    X = new int[n];
    czytaj_dane(&n, X);
    srednia_min_max(&n, X);
	return 0;
}
