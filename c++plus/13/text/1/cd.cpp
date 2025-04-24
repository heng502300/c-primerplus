#include<iostream>
#include<cstring>
#include"cd.h"

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    // std::strncpy(performer,s1,50);
    // performer[49] = '\0';
    // std::strncpy(label,s2,20);
    // label[19] = '\0';
    performer = new char[std::strlen(s1) + 1];
    std::strcpy(performer, s1);
    label = new char[std::strlen(s2) + 1];
    std::strcpy(label,s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    // std::strncpy(performer,d.performer,50);
    // performer[49] = '\0';
    // std::strncpy(label,d.label,20);
    // label[19] = '\0';
    performer = new char[std::strlen(d.performer) + 1];
    std::strcpy(performer,d.performer);
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label,d.label);
    selections = d.selections;
    playtime = d.playtime; 
}

Cd::Cd()
{
    performer = nullptr;
    label =  nullptr;
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performer;
    delete [] label;
}

void Cd::Report() const
{
    std::cout << "Performer: " << performer << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}


Cd &Cd::operator=(const Cd &d)
{
    if (this == &d) return *this; // self-assignment check
    // std::strncpy(performer,d.performer,50);
    // performer[49] = '\0';
    // std::strncpy(label,d.label,20);
    // label[19] = '\0';
    delete [] performer;
    delete [] label;
    performer = new char[std::strlen(d.performer) + 1];
    std::strcpy(performer,d.performer);
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label,d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}