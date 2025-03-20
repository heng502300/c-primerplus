#include<iostream>
#include<string>
using namespace std;

struct inflatable
{
       // char name[20];
        string name;
        float volume;
        double price;
};

int main()
{
       /* inflatable guest = 
        {
                "Glorious Gloria",
                 1.88,
                 29.99
        };

        inflatable pal =
        {
                "Audacious Arthur",
                3.12,
                32.00
        };

        cout << "Expand your  guest list with " << guest.name;
        cout << " and " << pal.name << endl;

        cout << "You can have both for $ ";
        cout << guest.price + pal.price << endl;
*/
        inflatable guest[2] =
        {
                {"Bambi", 0.5, 21.99},
                {"Godailla", 2000, 565.99}
        };

        cout << "The guests " << guest[0].name << " and " << guest[1].name 
             << " and " << guest[2].name << endl; 

        return 0;
}

