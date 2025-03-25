#include<iostream>
#include"bank.h"

int main()
{
    Bank account = Bank{"Zhang Fangheng", "1777", 10000};
    account.show();
    account.deposit(5000);
    account.show();
    account.withdraw(5000);
    account.show();
    return 0;
}
