
#include<iostream>

using namespace std;



int main()
{
	long int suma = 0;
	int n;

	cout << "PodaJ n: " << endl;
	cin >> n;


	for (int i=1;i<=n;i++)
	{
		suma = suma + i*i ; 
		cout << suma << endl;
	}
	cout << "wynik " << endl;
	cout << suma << endl;

    return 0;
}

