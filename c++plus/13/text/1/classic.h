#ifndef CLASSIC_H_
#define CLASSIC_H_
#include"cd.h"
class Classic : public Cd
{
private:
    char *cdstr;
public:
    Classic() : Cd() {cdstr = nullptr;}
    Classic(const char *s, const char *s1, const char *s2, int n, double x);
    Classic(const char *s,const Classic &d);
    ~Classic();
    virtual void Report() const;
    Classic &operator=(const Classic &cs);
};



#endif