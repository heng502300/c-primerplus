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
        inflatable guest = 
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

        return 0;
}

