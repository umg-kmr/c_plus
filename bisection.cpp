#include<iostream>
#include<math.h>

using namespace std;
 
//function used is x^4+5x^3-6x^2-7
double func(double x)
{
    return pow(x,10) + 5*pow(x,3) - 6*pow(x,2) - 7;
}
 
double e=0.00001;
double c;
 
void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
    }
 
    c = a;
 
    while ((b-a) >= e)
    {
        c = (a+b)/2;
        if (func(c) == 0.0){
            cout << "Root = " << c<<endl;
            break;
        }
        else if (func(c)*func(a) < 0){
                cout << "Root = " << c<<endl;
                b = c;
        }
        else{
                cout << "Root = " << c<<endl;
                a = c;
        }
    }
}
 
int main()
{
    double a,b;
    a=-2;
    b=-1;
 
    cout<<"The function used is x^10+5x^3-6x^2-7\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    bisection(a,b);
    cout<<"\n";
    cout<<"Accurate Root calculated is = "<<c<<endl;
 
    return 0;
}

