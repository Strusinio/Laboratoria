
#include<iostream>

using namespace std;

int p, q;
int wygrana;

void petlaGry() {
	cout << "Podaj liczbe oczek wylosowanych w pierwszym rzucie: " << endl;
	cin >> p;
	if (p >= 1 && p <= 6)
	{
		cout << "Wybrana liczba oczek to: " << p << endl;
	}
	else
	{
		cout << "Kostka nie ma tylu oczek" << endl;
	}

	cout << "Podaj liczbe oczek wylosowanych w drugim rzucie: " << endl;
	cin >> q;
	if (q >= 1 && q <= 6)
	{
		cout << "Wybrana liczba oczek to: " << q << endl;
	}
	else
	{
		cout << "Kostka nie ma tylu oczek" << endl;
	}
	if ((p == 2 || p == 4 || p == 6))
	{
		if ((q == 2 || q == 4 || q == 5)) {
			wygrana = p + (3 * q);

		}
		else
		{
			wygrana = 2 * q;

		}
	}


	if (p == 1 || p == 3 || p == 5)
	{
		if (q == 1 || q == 3 || q == 6)
		{
			if (p == q) {
				wygrana = (5 * p) + 3;
			}
			else {
				wygrana = (2 * q) + p;
			}
		}
		else
		{
			int min;
			if (p > q) {
				min = q;
			}
			else {
				min = p;
			}
			wygrana = min + 4;
		}
	}
	if (p == 5 && q == 5) {
		wygrana = wygrana + 5;
	}
	cout << "wygrana wynosi: " << wygrana << endl;
}



int main()
{
	char decyzja;

	do {
		system("cls");
		petlaGry();
		cout << "Czy kontynuowac? t/n"<< endl;
		cin >> decyzja;

	} while (decyzja == 't');
	return 0;
}

