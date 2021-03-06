#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double b,c, pi=3.141592653589793238, accuracy=1e-9;
double f(double);
double minimum();
int main() {
    long t;
    cin>>t;
    while(t--)
    {
	//input b,c
        cin>>b>>c;
	//setting high decimal precision for accuracy
        cout<<setprecision(10)<<minimum()<<'\n';
    }
	return 0;
}
double minimum()
{
    //uses ternary search to close in on minima
    //only works for positive b,c
    double s=0, e=pi/2;
    double m1, m2;
    while(e-s>accuracy)
    {
        m1=s+(e-s)/3;
        m2=e-(e-s)/3;
        if(f(m1)>f(m2))
            s=m1;
        else
            e=m2;
    }
    return f(s);
}
double f(double x)
{
    //function
    return (x*x + b*x +c)/sin(x);
}
