#ifndef ARRAYTP_H_
#define ARRAYTP_H_
#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP
{
private:
    T arr[n];
public:
    ArrayTP() {};
    explicit ArrayTP(const T & v);
    virtual T & operator[](int i);
    virtual T operator[](int i) const;
    //T & operator[](int i)
};

template<class T, int n>
ArrayTP<T, n>::ArrayTP(const T & v)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = v;
    }
}

template<class T, int n>
T & ArrayTP<T, n>::operator[](int i)
{
    if (i < 0 || i >= n)
    {
        std::cout << "Error in array limits: " << i << " is out of range\n";
        exit(EXIT_FAILURE);
    }
    return arr[i];
}

template<class T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
    if (i < 0 || i >= n)
    {
        std::cout << "Error in array limits: " << i << " is out of range\n";
        exit(EXIT_FAILURE);
    }
    return arr[i];
}


#endif