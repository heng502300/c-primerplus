
#include<iostream>

using namespace std;

void APP(int i, int j)
{
    cout <<"Time:" << i << " : " << j <<endl;
}
int main()
{
    int i;
    int j;
    cout << "Enter the number of hours: ";
    cin >> i;
   // cout << endl;
    cout << "Enter the number of minutes: ";
   cin >> j;
    cout << endl;
    APP(i,j);
    return 0;
}
