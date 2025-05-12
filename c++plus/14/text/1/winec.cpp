#include "winec.h"

Wine::Wine(const char *l, int y)
{
    wine_name = l;
    year_and_bottles.Set(ArrayInt(y), ArrayInt(y));
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
{
    wine_name = l;
    year_and_bottles.Set(ArrayInt(yr, y), ArrayInt(bot, y));
    year = y;
}

Wine::~Wine()
{
    
}

void Wine::GetBottles()
{
    ArrayInt yr(year);
    ArrayInt bt(year);

    cout << "Enter " << wine_name << " data for " << year << " year(s):\n";
    for (int i = 0; i < year; i++)
    {
        cout << "Enter year: ";
        cin >> yr[i];
        cout << "Enter bottles for that year: ";
        cin >> bt[i];
    }
    year_and_bottles.Set(yr, bt);
}

string & Wine::Label()
{
    return wine_name;
}

int Wine::sum() const
{
    return year_and_bottles.Sum();
}

void Wine::Show() const
{
    cout << "Wine: " << wine_name << endl;
    cout << "\tYear\tBottles\n";
    year_and_bottles.Show(year);
}