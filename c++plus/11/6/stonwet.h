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
        explicit Stonwet(double lbs);
        Stonwet(int stn, double lbs);
        Stonwet();
        ~Stonwet();
       // void show_1bs() const;
       // void show-stn() const;
     bool operator<(const Stonwet &st) const;
     bool operator>(const Stonwet &st) const;
     bool operator<=(const Stonwet &st) const;
     bool operator>=(const Stonwet &st) const;
     bool operator==(const Stonwet &st) const;
     bool operator!=(const Stonwet &st) const;
     friend std::ostream &operator<<(std::ostream &os, const Stonwet &st);
};

#endif
