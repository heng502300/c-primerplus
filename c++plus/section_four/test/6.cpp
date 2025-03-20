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
        CandyBar snack[3];
        snack[0]  = 
        {
                    "Mocha Munch",
                    2.3,
                    350
        };
        cout << snack[0].Brand << "and " << snack[0].Height << "and " << snack[0].cal << endl;
        snack[1] = 
        {
                    "Mocha Munch_1",
                    2.3,
                    350
        };
        cout << snack[1].Brand << "and " << snack[1].Height << "and " << snack[1].cal << endl; 
        snack[2] = 
        {
                    "Mocha Munch_2",
                    2.3,
                    350
        };
        cout << snack[2].Brand << "and " << snack[2].Height << "and " << snack[2].cal << endl;
        return 0;
}
