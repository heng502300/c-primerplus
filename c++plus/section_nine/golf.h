#ifndef GOLF_H_
#define GOLF_H_

const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf & g, const char * name, int hc);

int setgolf(golf & g);

void hanicap(golf & g, inr hc);

void showgolf(const golf & g);

#endif
