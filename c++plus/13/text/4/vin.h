#ifndef VIN_H_
#define VIN_H_
#include"port.h"
class Vin : public Port
{
    private:
        char *nickname;
        int year;
    public:
        Vin();
        Vin(const char *br, int b, const char *nn, int y);
        Vin(const Vin &vp);
        ~Vin() {delete [] nickname;}
        Vin &operator=(const Vin &vp);
        void Show() const;
        friend ostream &operator<<(ostream &os, const Vin &vp);
};
#endif