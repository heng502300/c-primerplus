#include<iostream>
#include"complex0.h"

Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
}

Complex::~Complex()
{}

Complex Complex::operator+(const Complex &t) const
{
    return Complex(real + t.real, imag + t.imag);
}

Complex Complex::operator-(const Complex &t) const
{
    return Complex(real - t.real, imag - t.imag);
}

Complex Complex::operator*(const Complex &t) const
{
    return Complex(real * t.real-imag * t.imag,real * t.imag + imag * t.real);
}

Complex Complex::operator*(double x) const
{
    return Complex(x * real, x * imag);
}

Complex Complex::operator~()const
{
    return Complex(real,-imag);
}

std::istream &operator>>(std::istream &is, Complex &t)
{
    std::cout << "real: ";
    if(is >> t.real)
    {
        std::cout << "imaginary: ";
        is >> t.imag;
    }
    return is;
}

std::ostream &operator<<(std::ostream &os, const Complex &t)
{
    os << "(" << t.real << "," << t.imag << "i";
    return os;
}

