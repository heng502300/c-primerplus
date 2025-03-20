#include<iostream>
#include"golf.h"

using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
   // g.fullname = name;
    strncpy(g.fullname, name, Len);
    g.fullname[Len - 1] = '\0';
    g.handicap = hc;
}

int setgolf(golf & g)
{
    cout << "Enter fullname: ";
    cin.getline(g.fullname, Len);
    if (0 == strcmp(g.fullname, "\0"))
    {
        return 0;
    }
    cout << "Please enter the handicap: ";
    while (!(cin >> g.handicap))
    {
        cin.clear();
        while (cin.get() != '\n')
        {
            continue;
        }
        cout << "Please enter an number: ";
    }
    cin.get();
    return 1; 
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    cout << "Fullname = " << g.fullanme << endl;
    cout << "handicap = " << g.handicap << endl;
}
