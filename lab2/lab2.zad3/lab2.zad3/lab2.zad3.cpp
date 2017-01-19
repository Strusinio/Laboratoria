
#include<iostream>
#include<cstdlib>

using namespace std;



int main()
{
	int a, b;
	int a1, b1;


	cout << "Podaj liczbe calkowita a: " << endl;
	cin >> a;
	cout << "Podaj liczbe calkowita b: " << endl;
	cin >> b;
	a1 = a, b1 = b;

	if(a <= 0 || b <= 0)
	{
		
		cout << "NWW: 0 "<<endl;
		return 0;
	}

	while (a1 != b1) {
		if (a1 > b1)
		{
			b1 = b1 + b;
		}
		else
		{
			a1 = a1 + a;
		}
	}
	
		cout << "NWW: " << a1 << endl;





    return 0;
}

