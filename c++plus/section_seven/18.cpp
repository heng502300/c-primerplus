#include<iostream>

using namespace std;

double betsy(int lines);
double pam(int lines);
void estimate(int lines, double (*pf)(int));
int main()
{
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's betsy's estimate:\n";
    estimate(code,betsy);
    cout << "Here's pam's estimate:\n";
    estimate(code,pam);
    return 0;
}

double betsy(int lines)
{
    return 0.05 * lines;
}

double pam(int lines)
{
    return 0.03 * lines + 0.0004 * lines * lines;
}

void estimate(int lines, double (*pf)(int))
{
    cout << lines << "lines will take ";
    cout << (*pf)(lines) << " hours " << endl;
}
