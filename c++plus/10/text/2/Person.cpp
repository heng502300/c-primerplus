#include"Person.h"
#include<iostream>
#include<cstring>
Person::Person(const std::string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname,fn);
}

void Person::show() const
{
    using std::cout;
    using std::endl;
    cout << "The name format is:" << endl;
    cout << fname << "(firstname), ";
    cout << lname << "(lastname).";
}


void Person::Formalshow() const
{
    using std::cout;
    using std::endl;
    cout << "The name format is:" << endl;
    cout << lname << "(lastname), ";
    cout << fname << "(firstname).";
}


