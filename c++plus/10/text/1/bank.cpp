#include<iostream>
#include"bank.h"
using namespace std;
Bank::Bank()
{
    name = "no name";
    accnum = "no acc";
    balance = 0.0;
}

Bank::Bank(const string & co, const string & acc, double n)
{
    name = co;
    accnum = acc;
    balance = n;
}

Bank::~Bank()
{
    cout << "----------" << endl;
}

void Bank::deposit(double cash)
{
    if(cash <= 0)
    {
        cout << "Enter cash can't negative\n";
        return ;
    }          
    else
        balance += cash;
    cout << "success deposit " << cash << endl;
}

void Bank::withdraw(double cash)
{
    if(balance < cash)
    {
        cout << "You can't withdraw more than your deposit\n";
        return ;
    }
    else if(cash <= 0)
    {
        cout << "You can't withdraw less than 0\n"; 
        return ;
    }
    else
        balance -= cash;
    cout << "You withdraw " << cash << endl;
}
void Bank::show() const
{
    cout << "Your name: " << name 
         << "accnum: " << accnum
         << "balance: " << balance << endl;
}
