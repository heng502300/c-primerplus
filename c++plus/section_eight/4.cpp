#include<iostream>

using namespace std;
void swapa(int &a,int &b);
void swapb(int *a,int *b);
void swapc(int a,int b);
int main()
{
    int x = 1, y = 2;
    swapa(x,y);
    cout << x << " " << y << endl;
    swapb(&x,&y);
    cout << x << " " << y << endl;
    swapc(x,y);
    cout << x << " " << y << endl;
    return 0;
}

void swapa(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapb(int *a,int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapc(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
