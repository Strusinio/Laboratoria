#include <iostream>
#include <math.h>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int wybor;

double funkcja1(double x) {
    return sin(x)* cos(x) + 5*x +1;
}

int funckja1Petla()
{
    double a = -2;
    double b =0;
    double c;
    double eps;
    cout << "podaj epsilon "<< endl;
    cin>>eps;

    if(funkcja1(a)==0)
    {
        cout<<"pierwiastek = "<<a<<endl;
        return 0;
    }
     if(funkcja1(b)==0)
    {
        cout<<"pierwiastek = "<<b<<endl;
        return 0;
    }
    do
    {
        c = (a+b)/2;
        if(funkcja1(c)==0)
        {
        cout<<"pierwiastek = "<<c<<endl;
        return 0;
        }
        if(funkcja1(a)*funkcja1(c) < 0)
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
double funkcja2(double x) {
    return (M_PI-x*x+sin(x))/sqrt(25-x);
}

int funckja2Petla()
{
    double a = 1.5;
    double b = 2.2;
    double c;
    double eps;
    cout << "podaj epsilon "<< endl;
    cin>>eps;

    if(funkcja2(a)==0)
    {
        cout<<"pierwiastek = "<<a<<endl;
        return 0;
    }
     if(funkcja2(b)==0)
    {
        cout<<"pierwiastek = "<<b<<endl;
        return 0;
    }
    do
    {
        c = (a+b)/2;
        if(funkcja2(c)==0)
        {
        cout<<"pierwiastek = "<<c<<endl;
        return 0;
        }
        if(funkcja2(a)*funkcja2(c) < 0)
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

double funkcja3(double x) {
    return  exp(-1.5*x)-0.3*x*x;
}

int funckja3Petla()
{
    double a = 0;
    double b = 1;
    double c;
    double eps;
    cout << "podaj epsilon "<< endl;
    cin>>eps;

    if(funkcja3(a)==0)
    {
        cout<<"pierwiastek = "<<a<<endl;
        return 0;
    }
     if(funkcja3(b)==0)
    {
        cout<<"pierwiastek = "<<b<<endl;
        return 0;
    }
    do
    {
        c = (a+b)/2;
        if(funkcja3(c)==0)
        {
        cout<<"pierwiastek = "<<c<<endl;
        return 0;
        }
        if(funkcja3(a)*funkcja3(c) < 0)
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
int main()
{
cout<<" MENU "<<endl;
cout<<"1. Pierwiastek funkcji f1(x) = sin(x)cos(x)+5x+1"<<endl;
cout<<"2. Pierwiastek funkcji f2(x) = (π-x*x+sin(x))/sqrt(25-x) "<<endl;
cout<<"3. Pierwiastek funkcji f3(x) = exp(-1.5x)-0.3x*x "<<endl;
cout<<"4. Koniec "<<endl;

do
{
    cin>>wybor;
    switch(wybor)
    {
        case 1:
            funckja1Petla();
            break;
        case 2:
            funckja2Petla();
            break;
        case 3:
            funckja3Petla();
            break;
        case 4:
               return 0;
        default:
            cout << "Zla opcja ponow wybor"<< endl;
    }
} while(1);
    return 0;
}
