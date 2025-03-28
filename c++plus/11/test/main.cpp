#include<iostream>
#include"stonewt.h"

int main()
{
    using namespace std;

    Stonewt inc(275,Stonewt::DOUBLE_POUND);
    Stonewt wol(285.7,Stonewt::STONE);
    Stonewt taf(21.8,Stonewt::INT_POUND);

    cout << "Here aer the tests: "<< endl;
    cout << "The celebrity weighted ";
    cout << inc;
    cout << "The detective weighted ";
    cout << wol;
    cout << "The president weighted ";
    cout << taf;
    cout << "inc + wol = " << inc + wol;
    cout << "wol - inc = " << wol - inc;
    cout << "taf * 10.0 = " << taf * 10.0;
    cout << "10.0 * taf = " << 10.0 * taf;
    return 0;
}
