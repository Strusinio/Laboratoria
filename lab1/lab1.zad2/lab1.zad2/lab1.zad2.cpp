
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	double a;
	double b;
	double r;
	double delta, delta_a, delta_b, delta_c;
	double x1, x2, y1, y2;

	cout << " wspolczynnik kierunku prostej "<<endl;
	cin >> a;

	cout << "  wspolczynnik przesuniecia prostej " << endl;
	cin >> b;

	cout << "  promien okregu " << endl;
	cin >> r;

	/*
	y^2=(ax+b)^2
	y^2=a^2x^2+2abx+b^2
	a^2+2abx+b^2-r^2+x^2
	a^2x^2 +x^2 +2abx + b^2 - r^2 + x^2
	A= a^2 + 1, B = 2ab, C=b^2 - r^2
	*/
	delta_a = a*a + 1;
	delta_b = 2 * a*b;
	delta_c = b*b - r*r;

	//delta = 4*(a*a*b*b)-4*(a*a + 1)*((b*b)-(r*r));
	delta = delta_b*delta_b - 4*(delta_a*delta_c);


	if(delta>0) {
		x1 = (-1 * delta_b + sqrt(delta)) / (2 * delta_a);
		x2 =  (-1 * delta_b - sqrt(delta)) / (2 * delta_a);
		y1 = a*x1 + b;
		y2 = a*x2 + b;

		cout << "Prosta przecina okrag w dwoch punktach " << endl;
		cout.width(7);
		cout << "x1= " << x1 <<" y1= "<< y1<<endl;
		cout.width(7);
		cout << "x2= " << x2 << " y2= " << y2<<endl;

	} else if (delta==0) {
		cout << " Prosta jest styczna do okregu " << endl;
		x1 = (-1 * delta_b) / (2 * delta_a);
		y1 = a*x1 + b;
		cout.width(7);
		cout << "x1= " << x1 << " y1= " << y1 << endl;
	}
	else {
		cout << " Prosta nie ma punktow wspolnych z okregiem" << endl;
	}
	 return 0;
}

