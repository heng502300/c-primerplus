#include<iostream>
#include<cstring>
#include"cow.h"
using namespace std;
Cow::Cow()
{
   // name[0] = '\0';
   // hobby = NULL;
    strcpy(name,"\0");
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    strncpy(name,nm,20);
    name[19] = '\0';
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    strcpy(name,c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby,c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow &Cow::operator=(const Cow &c)
{
    if(this != &c)
    {
        delete [] hobby;
        strcpy(name,c.name);
        hobby = new char[strlen(c.hobby) + 1];
        strcpy(hobby,c.hobby);
        weight = c.weight;
     
    }
    return *this;
}

void Cow::showCow() const
{
    cout << "Cow name: " << name << endl;
    cout << "Cow hobby: " << hobby << endl;
    cout << "Cow weight: " << weight << endl;
}
