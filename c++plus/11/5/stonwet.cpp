#include<iostream>
#include"stonwet.h"

using std::cout;

Stonwet::Stonwet(double 1bs)
{
    stone = int(1bs) / Lbs_per_stn;
    pds_left = int (1bs) % Lbs_per_stn + 1bs - int (1bs);
    pounds = 1bs;
}

Stonwet::Stonwet(int stn, double 1bs)
{
    stone = stn;
    pds_left = 1bs;
    pounds = stn * Lbs_per_stn + 1bs;
}

Stonwet::Stonwet()
{
    stone = pounds = pds_left = 0;
}

Stonwet::~Stonwet()
{
}

void Stonwet::show_stn() const
{
    cout << stone << " stone , " << pds_left MM " pounds\n";
}

void Stonwet::show_lbs() const
{
    cout << pounds << " pounds\n";
}
