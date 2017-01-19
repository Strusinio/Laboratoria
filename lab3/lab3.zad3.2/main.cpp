#include <iostream>

using namespace std;
int n,k;
int

int main()
{
    cout<<"podaj zbior liczb n "<<endl;
    cin>>n;

    cout<<"podaj ilo elementowy ma byc zbior k "<<endl;
    cin>>k;

    if(k > n) {
        cout << "K nie moze byc wieksze od N!";
        return 0;
    }

    // N!
    int wynik_n = 1;
    if (n != 0)
    {
        while (n > 0)
        {
        wynik_n = wynik_n * n;
        n--;
        }
    }
    // K!
    int wynik_k = 1;
    if (k != 0)
    {
        while (k > 0)
        {
        wynik_k = wynik_k * k;
        k--;
        }
    }
     // N-K!
     int nMinusK = 1;
     int roznica = n-k;
       if (roznica != 0)
    {
        while (roznica > 0)
        {
        nMinusK = nMinusK * roznica;
        roznica--;
        }
    }

    cout << "Wynik to " << wynik_n/(wynik_k*nMinusK) << endl;

}

    return 0;
}
