#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void dane( );
void pisz_tab( /* uzupelnij */ );
void zamiana( /* uzupelnij */ );
int A[8][10];
int wierszK, wierszI;
int main()
{
    srand( time( NULL ) );
    dane();
    pisz_tab();
    cout<<"podaj wiersze do zamiany: "<<endl;
    cout<<"podaj pierwszy wiersz: "<<endl;
    cin>>wierszK;
    cout<<"podaj drugi wiersz: "<<endl;
    cin>>wierszI;
    zamiana();
     pisz_tab();
    return 0;
}
void dane( )
{
    for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)


    for( int i = 0; i < 10; i++ )
		{
			A[i][j] = rand() %10 +1;
		}
	}
}

void pisz_tab( )
{
    {
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

}
void zamiana()
{
    int tmp[10];
    for(int i=0; i<10; i++)
    {
        tmp[i]=A[wierszK - 1][i];
    }
    for(int i=0; i<10; i++)
    {
        A[wierszK - 1][i]=A[wierszI - 1][i];
    }
    for(int i=0; i<10; i++)
    {
        A[wierszI - 1][i]=tmp[i];
    }
}
