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
	double W, Wx, Wy;


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

	W = (a*d) - (c*b);
	Wx = (e*d) - (f*b);
	Wy = (a*f) - (c*e);


	if (W == 0 && (Wx != 0 || Wy != 0)) {
		cout << "Brak rozwiazan" << endl;
	}
	else if (W == 0 && Wx == 0 && Wy == 0)
	{
		cout << "nieskonczenie wiele rozwiazan" << endl;
	}
	else
	{
		x = ((e*d) - (b*f)) / dzielenie;
		y = ((a*f) - (e*c)) / dzielenie;
		cout.width(8);
		cout << "Rozwiazanie ukladu rownan: " << endl << " x= " << x << " y= " << y << endl;
	}


	return 0;
}
