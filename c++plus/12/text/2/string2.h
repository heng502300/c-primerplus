#ifndef STRING2_H_
#define STRING2_H_
#include<iostream>
using std::istream;
using std::ostream;

class String
{
    private:
        char *str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
    public:
        String(const char *s);
        String();
        String(const String &s);
        ~String();
        int length() const {return len;}
        String &operator=(const String&st);
        String &operator=(const char *s);
        String &operator+(const char *s);
        char &operator[](int i);
        const char &operator[](int i) const;
        friend bool operator<(const String &st1, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st1, const String &st2);
        friend ostream &operator<<(ostream &os, const String &st);
        friend istream &operator>>(istream &is, String &st);
        friend String operator+(const char *s, const String &st);
        friend String operator+(const String &st1, const String &st2);
        void stringlow();
        void stringup();
        unsigned has(const char s) const;
        static int HowMany();

};



#endif
