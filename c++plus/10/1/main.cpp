#include<iostream>
#include"stock00.h"

int main()
{
    Stock flu;
    flu.acquire("NanoSmart", 20, 12.50);
    flu.show();
    flu.buy(15, 18.125);
    flu.show();
    flu.sell(400, 20.00);
    flu.show();
    flu.buy(300000, 40.125);
    flu.show();
    flu.sell(300000, 0.125);
    flu.show();
    return 0;
}
