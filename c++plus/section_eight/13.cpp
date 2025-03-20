#include<iostream>

using namespace std;

struct job
{
    char name[40];
    double salary;
    int floor;
};
template <> void Swap<job>(job &j1, job &j2);

template <typename T>
void Swap(T &a, T &b); 

template <typename T>
void Swap(T *a, T *b, int n);

void show(int a[]);

const int Lim = 8;
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
    cout << " ------------------------- " << endl;
    int d1[Lim] = {1,2,3,4,5,6,7,8};
    int d2[Lim] = {8,7,6,5,4,3,2,1};
    show(d1);
    show(d2);
    Swap(d1,d2,Lim);
    show(d1);
    show(d2);
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


template<typename T>
void Swap(T *a, T *b, int n)
{
    T temp;
    for(int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void show(int a[])
{
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for(int i = 4; i < Lim; i++)
        cout << a[i];
    cout << endl;
}

template <> void Swap<job>(job &j1, job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
}
