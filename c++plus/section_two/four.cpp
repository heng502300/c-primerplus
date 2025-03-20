#include<iostream>

using namespace std;

int Month(int i)
{
    int a;
    a = i * 12;
    return a;
}

int main()
{
    int i;
    cin >> i;
    cout << Month(i) << endl;
    return 0;
}

