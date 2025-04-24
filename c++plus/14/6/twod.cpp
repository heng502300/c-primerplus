#include <iostream>
#include "arraytp.h"

int main()
{
    using namespace std;
    ArrayTP<int, 10> sums;
    ArrayTP<double, 10> aves;
    ArrayTP<ArrayTP<int, 5>, 10> twodee;
    int i, j;
   // cout << "Enter 10 sets of 10 integers:\n";
    for (i = 0; i < 10; i++)
    {
        sums[i] = 0;
        for (j = 0; j < 5; j++)
        {
            twodee[i][j] = (i + 1)* (j + 1);
            sums[i] += twodee[i][j]; 
        }
        aves[i] = (double) sums[i] / 10;
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cout.width(2);
            std::cout << twodee[i][j] << ' ';
        }
        std::cout << ": sum = ";
        std::cout.width(3);
        std::cout << sums[i] << ", average = ";
        std::cout.precision(2);
        std::cout.width(6);
        std::cout << aves[i] << std::endl;
    }
    std::cout << "Done.\n";
    return 0;
}