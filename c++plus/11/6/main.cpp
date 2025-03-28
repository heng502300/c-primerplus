#include<iostream>
#include"stonwet.h"

//using std::cout
//void display(const Stonwet & st, int n);

int main()
{
  /*  Stonwet inc = 275;
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
    */
    using namespace std;
    double val;
    Stonwet minv,maxv;
    Stonwet temp(11,0.0);
    Stonwet wt[6] = {Stonwet(285.7), Stonwet(21, 8), Stonwet(12.0)};
    int count = 0;
    for (int i = 3; i < 6; i++)
    {
        cout << "Please enter an number for pounds: ";
        while (!(cin >> val))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Illegal input! Enter an number: ";
        }
        wt[i] = Stonwet(i + 1, val);
    }
    minv = maxv = wt[0];
    for (int i = 0; i < 6; i++)
    {
        minv = wt[i] < minv ? wt[i] : minv;
        maxv = wt[i] > maxv ? wt[i] : maxv;
        count += wt[i] >= temp;
    }
    cout << "The minimum pounds are: " << minv;
    cout << "The maximum pounds are: " << maxv;
    cout << "There are " << count << " elements more than 11 stones." << endl;

    return 0;
}

/*
void dispaly(const Stonwet & st, int n)
{
    for(int i = 0; i< n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}*/

