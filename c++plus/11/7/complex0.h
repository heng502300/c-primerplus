#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class Complex
{
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0);
        ~Complex();
        Complex operator+(const Complex &t) const;
        Complex operator-(const Complex &t) const;
        Complex operator*(const Complex &t) const;
        Complex operator*(double x) const;
        Complex operator~() const;
        friend Complex operator*(double x, const Complex &t) {return t * x;}
        friend std::istream &operator>>(std::istream &is,Complex &t);
        friend std::ostream &operator<<(std::ostream &os,const Complex &t);

};

#endif
