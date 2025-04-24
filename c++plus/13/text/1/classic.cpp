#include<iostream>
#include<cstring>
#include"classic.h"

Classic::Classic(const char *s, const char *s1, const char *s2, int n, double x) : Cd(s1,s2,n,x)
{
    cdstr = new char[std::strlen(s) + 1];
    std::strcpy(cdstr,s);
    // std::strncpy(cdstr,s,50);
    // cdstr[49] = '\0';
}

Classic::Classic(const char *s,const Classic &d) : Cd(d)
{
    cdstr = new char[std::strlen(s) + 1];
    std::strcpy(cdstr,s);
    // std::strncpy(cdstr,s,50);
    // cdstr[49] = '\0';
}

Classic::~Classic()
{
    // Destructor
    delete [] cdstr;
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "Major article int CD is: " << cdstr << std::endl;
    std::cout.put('\n');
}

Classic &Classic::operator=(const Classic &cs)
{
    if(this == &cs)
        return *this; // self-assignment check
    Cd::operator=(cs);
    cdstr = new char[std::strlen(cs.cdstr) + 1];
    std::strcpy(cdstr,cs.cdstr);
    // std::strncpy(cdstr,cs.cdstr,50);
    // cdstr[49] = '\0';
    return *this;
}

