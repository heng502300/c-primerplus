#include<iostream>

using namespace std;

int main()
{
        const int Arsize = 20;
        char name[Arsize];
        char dessert[Arsize];

        cout << "Enter your name:\n";
       // cin >> name;
       // cin.getline(name,Arsize);
       cin.get(name,Arsize).get();
        cout << "Enter your favorite dessert:\n";
       // cin >> dessert;
       
       // cin.getline(dessert,Arsize);
       cin.get(dessert,Arsize).get();
        cout << "I have some delicious " << dessert;
        cout << " for you, " << name << ".\n";

        return 0;
}
