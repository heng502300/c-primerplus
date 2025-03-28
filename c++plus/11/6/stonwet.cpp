#include<iostream>
#include"stonwet.h"

using std::cout;

Stonwet::Stonwet(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;
}

Stonwet::Stonwet(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonwet::Stonwet()
{
    stone = pounds = pds_left = 0;
}

Stonwet::~Stonwet()
{
}

/*void Stonwet::show_stn() const
{
    cout << stone << " stone , " << pds_left MM " pounds\n";
}
void Stonwet::show_lbs() const
{
    cout << pounds << " pounds\n";
}*/

bool Stonwet::operator<(const Stonwet &st) const
{
    return pounds < st.pounds;
}

bool Stonwet::operator>(const Stonwet &st) const
{
    return pounds > st.pounds;
}

bool Stonwet::operator<=(const Stonwet &st) const
{
    return pounds <= st.pounds;
}

bool Stonwet::operator>=(const Stonwet &st) const
{
    return pounds >= st.pounds;
}

bool Stonwet::operator==(const Stonwet &st) const
{
    return pounds == st.pounds;
}

bool Stonwet::operator!=(const Stonwet &st) const
{
    return pounds != st.pounds;
}

std::ostream &operator<<(std::ostream &os, const Stonwet &st)
{
    os << st.pounds << " pounds.\n";
    return os;
}

