#include"stock20.h"
#include<iostream>

using namespace std;

const int STKS = 4;
int main()
{
    Stock stocks[STKS] = 
    {
        Stock("NanoSmart",12,20.0),
        Stock("Boffo",200,2.0),
        Stock("Mono",130,.25),
        Stock("Fleep",60,6.5)
    };

    cout << "Stock holdings: " << endl;
    for(int st = 0; st < STKS; st++)
    {
        cout << stocks[st] << endl;
    }

    const Stock *top = &stocks[0];
    for (int st = 1; st < STKS; st++)
    {
        top = &top->topval(stocks[st]);
    }
    cout << "\nMost valuable holding:\n";
    cout << *top << endl;
    return 0;
}
