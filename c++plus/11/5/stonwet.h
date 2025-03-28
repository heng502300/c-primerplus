#ifndef STONWET_H_
#define STONWET_H_

class Stonwet
{
    private:
        enum{Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonwet(double 1bs);
        Stonwet(int stn, double 1bs);
        Stonwet();
        ~Stonwet();
        void show_1bs() const;
        void show-stn() const;
};

#endif
