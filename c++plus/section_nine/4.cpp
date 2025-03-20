#include<iostream>

using namespace std;
int average(int a,int b)
{
    return (a+b)/2;
}
int main()
{
    int a = 3;
    int b = 6;
   int c = average(a,b);
    cout << c << endl;
    return 0;
}
