#ifndef MYTIME_H_
#define MYTIME_H_

class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m = 0);
        void addmin(int m);
        void addhr(int h);
        void reset(int h = 0, int m = 0);
        Time operator+(const Time & t) const;
        Time operator-(const Time & t) const;
        Time operator*(double n) const;
        void show() const;
};

#endif
