/*#include<iostream>

using namespace std;

//const int a = 100;
int main()
{
        int i = 100;
        int j = 100;
        int year = 0;
        
        for( i = 100; i > j; ++year)
        {
            i += 10;
            j += j * 0.05;
            cout << "i= " << i << endl;
            cout << "j= " << j << endl;
        }

        cout << "经过 " << year << endl;
       /* if(i > j)
        {
                year ++;
        }
        i = 100 * year / 10;
*/

        return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    double daphne_money = 100;
    double cleo_money = 100;

    while (cleo_money <= daphne_money)
    {
        cout << "Year " << ++n << ':' << endl;
        daphne_money += 10;
        cleo_money += cleo_money * 0.05;
        cout << "Cleo's money = " << cleo_money;
        cout << ", Daphne's money = " << daphne_money << endl;
    }
    cout << "After " << n << " years, Cleo's money > Daphne's money.";

    return 0;
}
