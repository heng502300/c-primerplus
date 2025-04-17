#include"stock20.h"
#include<iostream>
#include<cstring>

using namespace std;

Stock::Stock()
{
    company = new char[1];
    company[0] = '\0';
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char *s, long n, double pr)
{
    company = new char[strlen(s) + 1];
    strcpy(company,s);
    if(n < 0)
    {
        cout << "Number of shares can't be nagative;" << endl;
        cout << company << "shares set to 0." << endl;
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    delete [] company;
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        cout << "Number of shares purchased can't be nagativ." << endl;
        cout << "Transaction is aborted. " << endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if(num < 0)
    {
        cout << "Number of shares sold can't be negative." << endl;
        cout << "Transaction is aborted." << endl; 
    }
    else if(num > shares)
    {
        cout << "You can't sell more than you have!" << endl;
        cout << "Transaction is aborted. " << endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }

}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

ostream &operator<<(ostream &os, const Stock &st)
{
    os << "Company: " << st.company << endl;
    os << "Shares: " << st.shares << endl;
    os << "Share Price: " << st.share_val << endl;
    os << "Total Worth: " << st.total_val << endl;
    return os;
}

const Stock &Stock::topval(const Stock &s) const
{
    return s.total_val > total_val ? s: *this;
}

