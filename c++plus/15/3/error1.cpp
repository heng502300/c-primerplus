#include <iostream>
#include <cstdlib>

using namespace std;
double hmean(double a, double b);

int main()
{
    double x, y, z;
    cout << "Enter two nubmeber : ";
    while (cin >> x >> y)
    {
        z = hmean(x, y);
        cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
        cout << "Enter next set of numbers <q to quit> : ";
    } 
    cout << "Bye!" << endl;
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
    {
        cout << "Unreasonable numbers : a = -b!" << endl;
        abort();
    }
    return 2.0 * a * b / (a + b);
}