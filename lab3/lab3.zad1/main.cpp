#include <iostream>
#include <math.h>
using namespace std;

long int n, suma=0;

int main()
{
    cout<<"wprowadz dodatnia liczbe calkowita"<<endl;
    cin>>n;
    long int p=sqrt(n);
    while(p>1){
            int p1;

            if(n%p == 0) {
                suma = suma + p;
                p1 = n/p;
                if(p1 != p) {
                      suma = suma + p1;
                }
            }

              p = p-1;
    }

    suma=suma+1;

if(suma==n)
{
    cout<<n<<" Jest liczba doskonala."<<endl;
}
else
{
     cout<<n<<" Nie jest liczba doskonala."<<endl;
}

    return 0;
}
