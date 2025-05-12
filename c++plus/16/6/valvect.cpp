#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <valarray>

using namespace std;

int main()
{
    vector<double> data;
    double temp;

    cout << "Enter numbers (<= 0 to quit): ";
    while(cin >> temp &&  temp > 0)
    {
        data.push_back(temp);
    }
    sort(data.begin(), data.end());
    int size = data.size();
    valarray<double> values(size);
    for(int i = 0; i < size; i++)
    {
        values[i] = data[i];
    }
    valarray<double> sq_rts(size);
    sq_rts = sqrt(values);
    valarray<double> results(size);
    results = values +2.0 * sq_rts;
    for(int i = 0; i < size; i++)
    {
        cout << values[i] << " ";
        cout << results[i] << endl;
    }
    cout << endl;
    return 0;
}