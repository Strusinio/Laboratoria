#include <iostream>

using namespace std;
int n, k, m;

int silnia (int n)
{
    if (n == 0)
    {
      return 1;
    }
        else {
            return n*silnia(n-1);
        }
    }
int wynik(int n,int k)
{
    m=silnia(n)/(silnia(k)*silnia(n-k));
    return m;
}
int main()
{

cout<<"podaj zbior liczb "<<endl;
cin>>n;

cout<<"podaj ilo elementowy ma byc zbior "<<endl;
cin>>k;



cout<<"wynik: " <<wynik(n,k)<<endl;

}
