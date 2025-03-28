#include<iostream>
#include"stonwet.h"

using std::cout
void display(const Stonwet & st, int n);

int main()
{
    Stonwet inc = 275;
    Stonwet wol(285.7);
    Stonwet taf(21,8);

    cout << "The celebrity weighed ";
    inc.show_stn();
    cout << "The detective weighted ";
    wol.show_stn();
    cout << "The president weighted ";
    taf.show_1bs();
    inc = 276.8;
    taf =325;
    cout << "After dinner, the celebrity weighted ";
    inc.show_stn();
    cout << "After dinner, the president weighed ";
    taf.show_1bs();
    display(taf,2);
    cout << "The wrestler weighted even more.\n";
    display(422,2);
    cout << "No stone left unearned\n";
    return 0;
}


void dispaly(const Stonwet & st, int n)
{
    for(int i = 0; i< n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}
