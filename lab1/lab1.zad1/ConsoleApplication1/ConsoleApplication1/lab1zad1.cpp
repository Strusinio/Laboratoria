// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	double a, b, c, d, e, f;
	double x, y;
	

	cout << " podaj wspolczynnik a" << endl;
	cin >> a;

	cout << " podaj wspolczynnik b" << endl;
	cin >> b;

	cout << " podaj wspolczynnik c" << endl;
	cin >> c;

	cout << " podaj wspolczynnik d" << endl;
	cin >> d;

	cout << " podaj wspolczynnik e" << endl;
	cin >> e;

	cout << " podaj wspolczynnik f" << endl;
	cin >> f;

	double dzielenie = ((a*d) - (b*c));

	if (dzielenie == 0) {
		cout << "Nie mozna podzielic przez 0" << endl;
		return 0;
	}

	x = ((e*d) - (b*f)) / dzielenie;
	y = ((a*f) - (e*c)) / dzielenie;
	cout.width(8);
	cout << "Rozwiazanie ukladu rownan: "<<endl<<" y= " << x << " y= " << y <<endl;

    return 0;
}

