#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

void Show(double);
const int LIM = 6;

int main()
{
    double arr1[LIM] = {28, 29, 30, 35, 38, 59};
    double arr2[LIM] = {63, 65, 69, 75, 88, 99};
    vector<double> gr8(arr1, arr1 + LIM);
    vector<double> m8(arr2, arr2 + LIM);
    cout << "Vector gr8:\n";
    for_each(gr8.begin(), gr8.end(), Show);
    cout << endl;
    cout << "Vector m8:\n";
    for_each(m8.begin(), m8.end(), Show);
    cout << endl;
    vector<double> sum(LIM);
    transform(gr8.begin(), gr8.end(), m8.begin(), sum.begin(), plus<double>());
    cout << "Vector sum:\n";
    for_each(sum.begin(), sum.end(), Show);
    cout << endl;
    vector<double> prod(LIM);
    transform(gr8.begin(), gr8.end(), prod.begin(), bind1st(multiplies<double>(), 2.5));
    cout << "Vector prod:\n";
    for_each(prod.begin(), prod.end(), Show);
    cout << endl;
    return 0;
}

void Show(double v)
{
    cout << v << " ";
}