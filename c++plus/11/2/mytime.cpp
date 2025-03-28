#include<iostream>
#include"mytime.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::addmin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::addhr(int h)
{
    hours += h;
}

void Time::reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time & t) const
{
    Time Del;
    int tot1, tot2;
    tot1 = t.minutes + t.hours * 60;
    tot2 = minutes + hours * 60;
    Del.minutes = (tot2 - tot1) % 60;
    Del.hours = (tot2 - tot1) / 60;
    return Del;
}

Time Time::operator*(double n) const
{
    Time res;
    long totalminutes = hours * 60 * n + minutes * n;
    res.minutes = totalminutes % 60;
    res.hours = totalminutes / 60;
    return res;
}

void Time::show() const
{
    std::cout << hours << " hours " << minutes << " minutes " << std::endl; 
}
