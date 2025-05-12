#include <iostream>
#include <cfloat>

bool hmean(double a, double b, double *ans);

int main()
{   
    using namespace std;
    double x, y, z;
    cout << "Enter two nubmeber : ";
    while (cin >> x >> y)
    {
        if(hmean(x,y,&z))
        {
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
           //cout << "Enter next set of numbers <q to quit> : ";
        }
        else
            cout << "One value should not be the negative of another - try again.\n";
        cout << "Enter next set of numbers <q to quit> : ";
    }
    cout << "Bye!" << endl;
    return 0;
}

bool hmean(double a, double b, double *ans)
{
    if (a == -b)
    {
        *ans = DBL_MAX;
        return false;
    }
    else
    {
        *ans = 2.0 * a * b / (a + b);
        return true;
    }
}