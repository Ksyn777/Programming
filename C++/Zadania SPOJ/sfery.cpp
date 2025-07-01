#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

double sfery(double d, double r)
{
    double promien = sqrt(pow(r,2) - pow((d/2),2));
    double pole = M_PI * pow(promien, 2);
    
    return pole;

}

int main()
{
    double d;
    double r;
    cout<<"Podaj d: ";
    cin>>d;
    cout<<" Podaj r: ";
    cin>>r;

    cout<<sfery(d, r);


}