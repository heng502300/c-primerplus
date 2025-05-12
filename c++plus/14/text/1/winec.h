#ifndef WINEC_H_
#define WINEC_H_
#include <iostream>
#include <valarray>
#include <string>
using namespace std;
template <class T1, class T2>
class Pair
{
private:
    T1 year;
    T2 bottles;
public:
    Pair();
    pair(const T1 & yr, const T2 & bt) : year(yr), bottles(bt) {};
    void Set(const T1 & yr, const T2 & bt) { year = yr; bottles = bt; }
    int Sum()  const;
    void Show(int y) const;
};

template <class T1, class T2>
int Pair<T1, T2>::Sum() const
{
    return bottles.sum();
}

template <class T1, class T2>
void Pair<T1, T2>::Show(int y) const
{
    for(int i = 0; i < y; i++)
        cout << "\t" << year[i] << " \t " << bottles[i] << endl;
}

typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine 
{
private:
    string wine_name;
    PairAraay year_and_bottles;
    int year;
public:
    Wine(const char *l, int y);
    Wine(const char *l, int y, const int yr[], const int bot[]);
    void GetBottles();
    string & Label();
    int sunm() const;
    void Show() const;
    ~Wine();
};


#endif  