#include<iostream>
#include"stock00.h"

Stock::Stock()
{
    std::cout << "Default constrctor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val= 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "Constructor using " << co << "called\n";
    company = co;

    if(n < 0)
    {
        std::cout << "Number of shares can't be nagative; "
                  << company << "shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout << "Buy, " << company << "!" << std::endl;
}

/*void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if(n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0" << std::endl;
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
*/
void Stock::buy(long num, double price)
{
    if(num < 0 )
    {   
        std::cout << "Number of shares purchaesd can't be negative. "
                  << "Transaction is aborted. " << std::endl;
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
    using std::cout;
    if(num < 0)
    {
        cout << "Number of shares sold can't be nagative. "
             << "Transaction is aborted. " << std::endl;
    }
    else if(num > shares)
    {
        
        cout << "Number of shares sold can't be nagative. "
             << "Transaction is aborted. " << std::endl;
    }
    else
    {
        
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::endl;
    cout << "Company：" << company
         << " Shares: " << shares << '\n'
         << " Share Price: $" << share_val
         << " Total Worth: $" << total_val << endl;
}

const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
        return s;
    else
        return *this;
}
