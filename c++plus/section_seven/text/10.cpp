#include<iostream>

using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double mux(double x, double y);
double calculate(double x, double y,double (*pa) (double x, double y));
int main()
{
    double (*pf[3]) (double x, double y) = {add,subtract,mux};
    double x,y;
    cout << "Please enter two number (q to exit): ";
    while(cin >> x >> y)
    {
        for(int i = 0; i < 3; i++)
        {
           switch(i)
           {
               case 0:
                     cout << " a + b " << (*pf[0]) (x,y) << endl; break;
               case 1:
                     cout << " a - b " << (*pf[1]) (x,y) << endl; break;
               case 2:
                     cout << " a * b " << (*pf[1]) (x,y) << endl; break;
          }
        }
    }
    double q = calculate(2.5, 10.4, add);
    cout << q << endl;
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y; 
}

double mux(double x, double y)
{
    return x * y;
}

double calculate(double x, double y,double (*pa) (double x, double y))
{
    return pa(x,y);
}
