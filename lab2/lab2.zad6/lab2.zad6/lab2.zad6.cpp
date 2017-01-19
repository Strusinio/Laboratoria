
#include <iostream>

using namespace std;

int a=15,b=25,c=30,d=35;
int godzinyPracy;
double tygodnioweZarobki=0;

void petla() {
	cout << "Podaj liczbe przepracowanych godzin w tygodniu: " << endl;
	cin >> godzinyPracy;
	cout << "Podaj kategorie zaszeregowania: " << endl;
	char kategoria;
	cin >> kategoria;
	int wybranaKategoria;

	switch (kategoria) {
	case('A'):
		wybranaKategoria = a;
		break;
	case('B'):
		wybranaKategoria = b;
		break;
	case('C'):
		wybranaKategoria = c;
		break;
	case('D'):
		wybranaKategoria = d;
		break;
	default:
		cout << "Kategoria nie istnieje"<<endl;
		return;
	}
	if (godzinyPracy > 40) {
		tygodnioweZarobki = 40 * wybranaKategoria;
		tygodnioweZarobki = tygodnioweZarobki + (godzinyPracy - 40) *wybranaKategoria * 2;
	}
	else {
		tygodnioweZarobki = godzinyPracy*wybranaKategoria;
	}


	if (tygodnioweZarobki <= 700)
	{
		tygodnioweZarobki = tygodnioweZarobki*0.85;
	}
	else if (tygodnioweZarobki <= 1200)
	{
		tygodnioweZarobki = tygodnioweZarobki*0.80;
	}
	else
	{
		tygodnioweZarobki = tygodnioweZarobki*0.75;
	}

	cout << "tygodniowe zarobki wynosza: " << tygodnioweZarobki << " PLN Netto" << endl;
}
int main()
{
	char decyzja;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	do {
		system("cls");
		petla();
		cout << "Czy kontynuowac? t/n" << endl;
		cin >> decyzja;

	} while (decyzja == 't');
	return 0;
	

 return 0;
}

