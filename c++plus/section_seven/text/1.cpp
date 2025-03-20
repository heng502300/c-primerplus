#include<iostream>

using namespace std;

double average(double x, double y);
int main()
{
    double a, b;
    cout << "Please enter two number: ";
    while(cin >> a >> b && a && b)
    {
       cout << average(a,b) << endl;
       cout << "Please enter two number: ";
    }
    return 0;
}

double average(double x, double y)
{
    return 2.0 * x * y / (x + y);
}

