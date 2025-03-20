#include<iostream>

using namespace std;

template <typename T>
void Swap(T &a, T &b); 

int main()
{
    int i = 10, j = 20;
    cout << i << " , " << j << endl;
    Swap(i,j);
    cout << i << " , " << j << endl;
    double x = 11.1, y = 12.1;
    cout << x << " , " << y << endl;
    Swap(x,y);

    cout << x << " , " << y << endl;
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
