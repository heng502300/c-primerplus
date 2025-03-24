#include<iostream>
#include"stock00.h"

int main()
{
   /* Stock flu;
    flu.acquire("NanoSmart", 20, 12.50);
    flu.show();
    flu.buy(15, 18.125);
    flu.show();
    flu.sell(400, 20.00);
    flu.show();
    flu.buy(300000, 40.125);
    flu.show();
    flu.sell(300000, 0.125);
    flu.show();*/
 {
    using std::cout;
    using std::endl;
    cout << "Using constructor to create new objects\n";
    Stock stock1("Nano", 12, 20.0);
    stock1.show();
    Stock stock2 = Stock("Baffo", 2, 2.0);
    stock2.show();

    cout << "Assigning stock1 to stock2: " << endl;
    stock2 = stock1;
    cout << "Listing stock1 and stock: " << endl;
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty", 10, 50.0);
    cout << "Revised stock1: " << endl;
    stock1.show();
    cout << "Done\n";

 }

    return 0;
}
