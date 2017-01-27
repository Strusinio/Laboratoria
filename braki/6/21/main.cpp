#include <iostream>
#include <string.h>
using namespace std;

int n;

void czytaj_dane(int *X, int *Y)
{
	for (int i = 0; i < n; i++)
	{
		cout << "podaj X nr " << i+1 << endl;
		cin >> X[i];

		cout << "podaj Y nr " << i + 1 << endl;
		cin >> Y[i];
	}
}

int iloczyn_skalarny(int *X, int *Y)
{
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += X[i] * Y[i];
	}
	return suma;
}




int main()
{
	int *X;
	int *Y;

    do
	{
		cout << "Podaj liczbe wyrazow " << endl;
		cin >> n;
	} while (n <= 0 || n > 10);

    X = new int[n];
    Y = new int[n];

    czytaj_dane(X, Y);


	int wynik=iloczyn_skalarny(X, Y);
	cout << "Wynik = " << wynik << endl;


	return 0;
}
