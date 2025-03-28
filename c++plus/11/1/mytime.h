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
        Time sum(const Time & t) const;
        void show() const;
};

#endif
