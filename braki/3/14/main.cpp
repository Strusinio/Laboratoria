#include <iostream>
#include <math.h>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
double a, b, c;
double eps;

double funkcja(double x)
{
    return exp(-1.5 * x) - 0.3 * (x*x);
}
int main()
{
    cout << "podaj a" << endl;
    cin >>a;

    cout << "podaj b" << endl;
    cin >>b;

    cout << "podaj epsilon "<< endl;
    cin>>eps;

    if(funkcja(a)==0)
    {
        cout<<"pierwiastek = "<<a<<endl;
        return 0;
    }
     if(funkcja(b)==0)
    {
        cout<<"pierwiastek = "<<b<<endl;
        return 0;
    }

    do
    {
        c = (a+b)/2;
        if(funkcja(c)==0)
        {
        cout<<"pierwiastek = "<<c<<endl;
        return 0;
        }
        if(funkcja(a)*funkcja(c) <0)
        {
            b=c;
        }
        else
        {
                a=c;
        }
    }
    while(abs(a-b) >=eps);
    cout<<"pierwiastek = "<<c<<endl;


    return 0;
}
