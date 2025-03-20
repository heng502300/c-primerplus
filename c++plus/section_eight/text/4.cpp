#include<iostream>
#include<cstring>
using namespace std;

struct stringy
{
    char * str;
    int ct;
};

void set(stringy & be, const char * str);
void show(const stringy & be,int a = 1);
void show(const char * ch,int a = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
    return 0;
}
void set(stringy & be, const char * str)
{
    be.str = new char[strlen(str) + 1];
    strcpy(be.str,str);
}
void show(const stringy & be,int a)
{
    for(int i = 0; i < a; i++)
        cout << be.str << endl;
}
void show(const char * ch,int a)
{
    for(int i = 0; i < a; i++)
        cout << ch << endl;
}
