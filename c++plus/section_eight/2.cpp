#include<iostream>

using namespace std;


int main()
{
    int rats = 101;
    int & rodents = rats;
    cout << " rats: " << rats << endl;
    cout << " rodents: " << rodents << endl;
    rodents++;
    cout << " rats: " << rats << endl;
    cout << " rodents: " << rodents << endl;
    cout << " &rats: " << &rats << endl;
    cout << " &rodents: " << &rodents << endl;
    return 0;

}
