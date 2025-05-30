#ifndef CD_H_
#define CD_H_

class Cd
{
private:
    char *performer;
    char *label;
    int selections;
    double playtime;
public:
    Cd(const char *s1, const char *S2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd &operator=(const Cd &d);

};

#endif