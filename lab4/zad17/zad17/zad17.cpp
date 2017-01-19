
#include <iostream>
#include <string.h>
using namespace std;



void czyt_wyraz(char A[])
{
	cout << "Podaj wyraz " << endl;
	cin >> A;

}
void sprawdz_wyraz(char A[])
{
	int dlugosc = strlen(A);
	bool jestPalindromem = true;
	for(int i=0, j=(dlugosc-1);i<j;i++,j--)
	{
		if(A[i]!=A[j])
		{
			jestPalindromem = false;
			break;
		}
	}
	if (jestPalindromem)
	{
		cout << "Jest Palindromem" << endl;
	}
	else
	{
		cout << "Nie jest Palindromem" << endl;
	}
}



int main()
{
	char A[1000];

	czyt_wyraz(A);

	sprawdz_wyraz(A);

    return 0;
}

