// lab1.zad 3.cpp : Defines the entry point for the console application.
//

#define _USE_MATH_DEFINES 
#include<iostream>
#include <math.h>

using namespace std;


int main()

{
	double promien;
	double kat;
	cout << "podaj kat"<<endl;
	cin >> kat;
	cout << "podaj promien" << endl;
	cin >> promien;

	double wynik = ((promien*promien) / 2)*(M_PI *(kat/ 180) - sin(M_PI * kat/ 180));
	cout << "obliczone pole wynosi "<<wynik<<endl;

	
	return 0;
}

