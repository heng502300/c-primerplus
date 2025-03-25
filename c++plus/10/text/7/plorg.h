#ifndef PLORG_H_
#define PLORG_H_


class Plorg
{
    private:
        char name[20];        
        int CI;
    public:
        Plorg();
        void reset_ci();
        void show() const;
        void create_new_plorg(const char * newname);
};

#endif
