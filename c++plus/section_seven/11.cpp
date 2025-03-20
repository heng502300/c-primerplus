#include<iostream>

using namespace std;

//void show(travel c);
//travel sum(travel a, travel b);
const int Mins_per_hr = 60;

struct travel
{
    int hours;
    int mins;
};

void show(travel c);
travel sum(travel a, travel b);
int main()
{
    travel day1 = {5,45};
    travel day2 = {4,55};

    travel trip = sum(day1,day2);
    cout << "Two_day total : ";
    show(trip);
    travel day3 = {4,32};
    cout << "Three_day total : ";
    show(sum(day3,trip));

    return 0;
}

travel sum(travel a, travel b)
{
    travel total;
    total.mins = (a.mins + b.mins) % Mins_per_hr;
    total.hours = (a.hours + b.hours) + (a.mins + b.mins) / Mins_per_hr;
    return total;
}

void show(travel c)
{
    cout << c.hours << " hours, "
         << c.mins << " mins, " << endl;
}
