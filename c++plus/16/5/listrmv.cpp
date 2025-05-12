#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void Show(double);
const int LIM = 10;

int main()
{
    int  arr1[LIM] = {28, 29, 30, 35, 38, 59, 63, 65, 69, 75};
    list<int> l1(arr1, arr1 + LIM);
    list<int> l2(l1);
    cout << "List l1:\n";
    for_each(l1.begin(), l1.end(), Show);
    cout << endl;
    cout << "List l2:\n";
    for_each(l2.begin(), l2.end(), Show);
    cout << endl;
    l1.remove(30);
    cout << "List l1 after removing 30:\n";
    for_each(l1.begin(), l1.end(), Show);
    cout << endl;
    list<int>::iterator last;

    last = remove(l2.begin(), l2.end(), 30);
    cout << "List l2 after removing 30:\n";
    for_each(l2.begin(), l2.end(), Show);
    cout << endl;
    l2.erase(last, l2.end());
    cout << "List l2 after erasing all elements after the removed element:\n";
    for_each(l2.begin(), l2.end(), Show);
    cout << endl;
    return 0;
}
void Show(double v)
{
    cout << v << " ";
}
