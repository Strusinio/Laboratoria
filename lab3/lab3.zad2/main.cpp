#include <iostream>
#include <math.h>
#include<windows.h>
using namespace std;
int n;

bool czy_pierwsza(int number) {
  if(number<2) {
    return false;
  }

  for(int i=2;i*i<=number;i++) {
    if(number%i==0) {
      return false;
    }
  }
  return true;
}
void petla(){
 cout<<"Wprowadz liczbe naturalna"<<endl;
    cin>>n;

  for(int i=2;i<n;i++)
   {
       if(czy_pierwsza(i))
       {
           cout<<i<<endl;
       }
   }
}
int main()

{
	char decyzja;

	do {
		system("cls");
		petla();
		cout << "Czy kontynuowac? t/n" << endl;
		cin >> decyzja;

	} while (decyzja == 't');
	return 0;




    return 0;
}
