#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;




int main()
{

	int n;

	cout << "Wprowadz liczbe dla ktorej zostana wypisane dzielniki: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
	
		if (n%i == 0)
		{
			cout << i << "liczba jest dzielnikiem: " << i << endl;
		}
	}

	int i = 1;
	while (i <= n)
	{
		if (n%i == 0)
		{
			cout << i << "liczba jest dzielnikiem: " << i << endl;
		}
		i++;
	}

	i = 1;
	do 
	{
		if (n%i == 0)
		{
			cout << i << "liczba jest dzielnikiem: " << i << endl;
		}
		i++;
	} while (i <= n);

	return 0;
}

