#include "brass.h"
#include <iostream>
using namespace std;
int main()
{
    Brass brass("Brass", 123456789, 4000.00);
    BrassPlus brassplus("BrassPlus", 123456789, 3000.00);
    
    brass.ViewAcct();
    cout << endl;
    brassplus.ViewAcct();
    cout << endl;

    cout << "Depositing $1000 into the Brass account:\n";
    brass.Deposit(1000.00);
    cout << "New balance: $" << brass.Balance() << endl;
    cout << "Withdrawing $4200 from the Brass account:\n";
    brass.Withdraw(4200.00);
    brass.ViewAcct();
    cout << endl;

    cout << "Withdrawing $4200 from the BrassPlus account:\n";
    brassplus.Withdraw(4200.00);
    brassplus.ViewAcct();
    return 0;
}
