#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int tablica[100];
int a, b, n;

void czyt_dane (int A[ ])
{
  cout<<"Podaj a "<<endl;
  cin>>a;
  cout<<"Podaj b "<<endl;
  cin>>b;
  cout<<"Podaj n "<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      A[i]=a + (rand() % (int)(b - a + 1));
  }
}

 void pisz_tab(int A[ ], int n)
 {
    for(int i=0;i<n;i++)
    {
      cout << A[i] << " ";
    }
    cout << endl;
 }

 void  srednia(int A[ ], int n)
 {
     double srednia=0;
      for(int i=0;i<n;i++)
      {
          srednia=A[i] + srednia;
      }
      srednia= srednia/n;
     cout <<"srednia arytmetyczna elementow tablicy wynosi "<<srednia<<endl;
 }

 void ile(int A[ ], int n)
 {
     int licznik=0, szukanaLiczba;

     cout<<"szukana liczba: "<<endl;
     cin>>szukanaLiczba;
     for(int i=0;i<n;i++)
     {
         if (szukanaLiczba==A[i])
         {
             licznik++;
         }

     }
     cout<<"Dana liczba wystepuje "<<licznik<<" razy"<<endl;
 }
 void nieparzyste(int A[ ], int n)
{
    int licznik=0;
    int suma=0;

    for(int i=0;i<n;i++)
     {
         if (A[i]%2!=0)
         {
             licznik++;
             suma=A[i] + suma;
         }

     }
     cout<<"Liczba nieparzysta wystepuje "<<licznik<<" razy"<<"Suma liczb nieparzystych wynosi "<<suma<<endl;
}
void  min(int A[ ], int n)

{
    int minWartosc = A[0];
    int indeks=0;

    for(int i=0;i<n;i++)
    {
        if(minWartosc>A[i])
        {
            minWartosc = A[i];
            indeks=i;
        }

    }
    cout<<"Najmniejsza liczba to "<<minWartosc<<" indeks min wart "<<indeks<<endl;
}

void  max(int A[ ], int n)

{
    int maxWartosc = A[0];
    int indeks=0;

    for(int i=0;i<n;i++)
    {
        if(maxWartosc<A[i])
        {
            maxWartosc = A[i];
            indeks=i;
        }
    }
    cout<<"Najwieksza liczba to "<<maxWartosc<<" indeks min wart "<<indeks<<endl;

}

void  sasiednie(int A[ ], int n)
{
    int sasiadA=0, sasiadB=0, suma=0;
    if(n< 2)
    {
        cout << "Za malo elementow w tablicy!"<<endl;
        return;
    }
    for(int i=1;i<n;i++)
    {
        if(A[i-1]+A[i] > suma)
        {
            suma = A[i-1]+A[i] ;
            sasiadA = i;
            sasiadB = i+1;
        }
    }
    cout << "sasiadujace elementy o najwyzszej sumie to liczby numer "<< sasiadA << " oraz " << sasiadB << " ich suma wynosi " << suma <<endl;
}
void  najczestszy(int A[ ], int n)
{
    int najczesciejWystepujacy;
    int licznikMax=0;
    for(int i=0;i<n;i++)
    {
        int licznik=0;
        for(int j=i;j<n;j++)
        {
            if(A[i]==A[j])
            {
                licznik++;
            }
        }

        if(licznik>licznikMax)
        {
            licznikMax=licznik;
            najczesciejWystepujacy=A[i];
        }
    }
    cout<<"Najczesciej wystepujaca liczba to "<<najczesciejWystepujacy<<" wystepuje "<<licznikMax<<" razy"<<endl;
}

int main()
{
  srand( time( NULL ) );
  czyt_dane(tablica);
  pisz_tab(tablica, n);
  srednia(tablica,n);
  ile(tablica, n);
  nieparzyste(tablica, n);
  min(tablica, n);
  max(tablica, n);
  sasiednie(tablica, n);
  najczestszy(tablica, n);
    return 0;
}
