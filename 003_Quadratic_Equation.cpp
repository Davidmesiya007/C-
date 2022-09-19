//Quadratic Equation
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,r1,r2,im,rp,disc;
    cout << "Enter the a, b, c values :";
    cin >>a >>b >>c;
    disc = b*b-4*a*c;
    if(disc>=0)
    {
        r1=(-b+sqrt(disc))/(2*a);
        r2=(-b-sqrt(disc))/(2*a);
        cout << "r1 is = " << r1 << endl <<"r2 is = "<< r2 ;
    }
    else
    {
        rp=-b/(2*a);
        im=sqrt(-disc)/(2*a);
        cout << "r1 is = " << rp <<"+"<< im <<"i" << endl;
        cout << "r2 is = " << rp <<"-"<< im <<"i";
    }

}
