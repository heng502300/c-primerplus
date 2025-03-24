#include<iostream>
#include"stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
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

void Stock::show()
{
    using std::cout;
    using std::endl;
    cout << "Company：" << company
         << " Shares: " << shares << '\n'
         << " Share Price: $" << share_val
         << " Total Worth: $" << total_val << endl;
}


