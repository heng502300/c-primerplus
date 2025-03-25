#ifndef  BANK_H_
#define BANK_H_
#include<string>
class Bank
{
    //using std::string;
    private:
       std::string name;
       std::string accnum;
       double balance;
    public:
        Bank();
        Bank(const std::string & co, const std::string & acc, double n = 0.0);
        ~Bank();
        void deposit(double cash);
        void withdraw(double cash);
        void show() const;
};

#endif
