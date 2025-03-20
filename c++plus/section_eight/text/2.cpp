#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct CandyBar
{
    string name;
    double weight;
    int tel;
};

void abb(CandyBar & ca, const string str = "Millenium", double w = 2.85, int t = 350);
void bba(const CandyBar & ba);
int main()
{
    CandyBar mycanday;
    abb(mycanday);
    bba(mycanday);
    return 0;
}

void abb(CandyBar & ca, const string str, double w, int t )
{
   // strcpy(ca.name,str);
   ca.name = str;
   ca.weight = w;
    ca.tel = t;
}

void bba(const CandyBar & ba)
{
    cout << ba.name << endl;
    cout << ba.weight << endl;
    cout << ba.tel << endl;
}
