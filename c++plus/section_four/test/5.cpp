#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
    string Brand;
    double Height;
    int cal;
};

int main()
{
        CandyBar snack = 
        {
                    "Mocha Munch",
                    2.3,
                    350
        };
         cout << snack.Brand << "and " << snack.Height << "and " << snack.cal << endl;

        return 0;
}
