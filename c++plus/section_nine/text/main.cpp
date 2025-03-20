#include<iostream>
#include"sales.h"

int main()
{
    using namespace SALES;
      Sales objects[2];
    const double temp[4] = {1.0, 2.0, 3.0, 4.0};

    setSales(objects[0]);
    setSales(objects[1], temp, 4);
   showSales(objects[0]);
    showSales(objects[1]);
    std::cout << "Bye." << std::endl;
    return 0;
}
