#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    public: 
        enum Mode {STONE,INT_POUND,DOUBLE_POUND};
    private:
        enum {Lbs_per_stn = 14}; //1英石等于14英镑
        int stone;
        double pds_left;
        double pounds;
        int pounds_int;
        Mode mode;
        void set_stone();
        void set_pounds();
        void set_pounds_int();
    public:
        Stonewt(double lbs, Mode form);
        Stonewt(int stn, double lbs, Mode form);
        Stonewt();
        ~Stonewt();
        void set_stone_mode();
        void set_pounds_mode();
        void set_int_pounds_mode();
        Stonewt operator+(const Stonewt & st) const;
        Stonewt operator-(const Stonewt & st) const;
        Stonewt operator*(double n) const;
        friend Stonewt operator*(double n, const Stonewt & st);
        friend std::ostream &operator<<(std::ostream & os, const Stonewt & st);
};

#endif
