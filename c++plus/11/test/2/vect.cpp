#include<iostream>
#include<cmath>
#include"vect.h"
using std::atan;
using std::atan2;
using std::cos;
using std::sin;
using std::sin;
using std::sqrt;
namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);

    double Vector::set_mag() const
    {
        return sqrt(x * x +  y * y);
    }

    double Vector::set_ang() const
    {
        if(x == 0.0 && y == 0.0)
            return  0.0;
        else
            return atan2(y,x);
    }

    void Vector::set_x(double mag,double ang)
    {
        x = mag * cos(ang);
    }

    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }

    Vector::Vector()
    {
        x = y =  0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
           // set_mag();
           // set_ang();
        }
        else if(form == POL)
        {
           // mag = n1;
            //ang = n2 / Rad_to_deg;
            set_x(n1,n2/Rad_to_deg);
            set_y(n1,n2/Rad_to_deg);
        }
        else
        {
            std::cout << "Incorrect 3rd argument to Vector() --";
            std::cout << "vector set to0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
            //set_mag();
            //set_ang();
        }
        else if(form == POL)
        {
            //mag = n1;
            //ang = n2 / Rad_to_deg;
            set_x(n1,n2/Rad_to_deg);
            set_y(n1,n2/Rad_to_deg);
        }
        else
        {
           std::cout << "Incorrect 3rd argument to Vector() --";
            std::cout << "vector set to0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector()
    {}

    void Vector::polar_mode()
    {
        mode = POL;
    }

    void Vector::rect_mode()
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector & b) const
    {
        return Vector( x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector & b) const
    {
        return Vector( x - b.x, y - b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector( -x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }
    
    Vector operator*(double n, const Vector & a)
    {
        return n * a;
    }

    std::ostream &operator<<(std::ostream & os, const Vector & v)
    {
        if(v.mode == Vector::RECT)
        {
            os << "(x,y) = (" << v.x << " , " << v.y << ")"; 
        }
        else if(v.mode == Vector::POL)
        {
            os << "(m,a) = (" << v.magval() << ", ";
            os << v.angval() * Rad_to_deg << ")";
        }
        else
            os << "Vector object mode is invalid";
        return os;
    }
};
