#include <iostream>
#include <string>

template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const {return a;}
    T2 second() const {return b;}
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
    Pair() {}
};

template <class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}

template <class T1, class T2>
T2 & Pair<T1, T2>::second()
{
    return b;
}

int main()
{
    using namespace std;
    Pair<string, int> ratings[4] = {
        Pair<string, int>("The Purplish", 5),
        Pair<string, int>("The Prick", 4),
        Pair<string, int>("Just Boring", 5),
        Pair<string, int>("Marilyn Manson", 3)
    };
    int joints = sizeof(ratings) / sizeof(Pair<string, int>);
    cout << "Rating\tBands\n";
    for (int i = 0; i < joints; i++)
        cout << ratings[i].second() << "\t" << ratings[i].first() << endl;
    cout << "Oops! Revised rating:\n";
    ratings[3].first() = "The Mighty Morphin' Power Rangers";
    ratings[3].second() = 6;
    cout << ratings[3].second() << "\t" << ratings[3].first() << endl;
    cout << "Done!\n";
    //for (int i = 0; i < joints; i++)
      //  cout << ratings[i].second() << "\t" << ratings[i].first() << endl;
    return 0;
}
