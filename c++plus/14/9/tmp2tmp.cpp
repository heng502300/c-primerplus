#include <iostream>

using namespace std;

template <typename T> void counts();
template <typename T> void reports(T &);

template <typename TT>
class HasFriend
{
private:
    TT item;
    static int ct;
public:
    HasFriend(const TT & i) : item(i) {ct++;}
    ~HasFriend() {ct--;}
    friend void counts<TT>();
    friend void reports<>(HasFriend<TT> &);
};

template <typename T>
int HasFriend<T>::ct = 0;

template <typename T>
void counts()
{
    cout << "template size" << sizeof(HasFriend<T>) << "; ";
    cout << "tempalte count: " << HasFriend<T>::ct << endl;
}
template <typename T>
void reports(T & hf)
{
    cout << hf.item << endl;
}

int main()
{
    counts<int>();
    HasFriend<int> hfi1(10);
    HasFriend<int> hfi2(20);
    HasFriend<double> hfdb(10.5);
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);
    cout << "counts<int>() output:\n";
    counts<int>();
    cout << "counts<double>() output:\n";
    counts<double>();
    return 0;
}