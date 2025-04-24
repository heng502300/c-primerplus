#include<iostream>
#include<string>
#include"acctabc.h"

using namespace std;

Acctabc::Acctabc(const string & s, long an, double bal)
{
    fullname = s;
    acctNum = an;
    balance = bal;
}

void Acctabc::Despoit(double amt)
{
    if (amt < 0)
    {
        cout << "Negative deposit not allowed;"
             << "deposit is cancelled.\n";
    }
    else
        balance += amt;
}

void Acctabc::Withdraw(double amt)
{
    balance -= amt;
}

Acctabc::Formatting Acctabc::SetFormat() const
{
    Formatting f;
    f.flag = 
        cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void Acctabc::Restore(Formatting & f) const
{   
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}

void Brass::Withdraw(double amt)
{
    if (amt < 0)
    {
        cout << "Withdrawal amount must be positive; "
             << "withdrawal canceled.\n";
    }
    else if (amt <= Balance())
    {
        Acctabc::Withdraw(amt);
    }
    else
        cout << "Withdarwal amount of $" << amt
             << "exceeds your balance.\n"
             << "Withdrawal canceled.\n";
}

void Brass::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "Brass Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    Restore(f);
}

BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r) : Acctabc(s, an, bal)
{
    maxLoan = ml;
    oweBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) : Acctabc(ba)
{
    maxLoan = ml;
    oweBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const
{
   // format initialState = setFormat();
   // precis prec = cout.precision(2);
    Formatting f = SetFormat();
    //Brass::ViewAcct();
    cout << "BrassPlus Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance $" << Balance() << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << oweBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%\n";
    Restore(f);
   // restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt)
{
   //   format initialState = setFormat();
   // precis prec = cout.precision(2);
    Formatting f= SetFormat();
    double bal = Balance();
    if (amt <= bal)
        Acctabc::Withdraw(amt);
    else if (amt <= bal + maxLoan - oweBank)
    {
        double advance = amt - bal;
        oweBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Despoit(advance);
        Acctabc::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded. Transaction cancelled.\n";
    Restore(f);
        // restore(initialState, prec);
}