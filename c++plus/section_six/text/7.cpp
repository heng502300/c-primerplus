#include<iostream>
#include<string>
using namespace std;

struct car
{
        string procucer;
        int year;
};

int main()
{
        cout << "How many cars do you wish to cataloh? ";
        int num;
        cin >> num;
        cin.get();
        car *many_car =  new car[num];
        

        for(int i = 0; i < num; i++)
        {
                cout << "Car #" << i + 1 << ": " <<endl;
                cout << "Please enter the make: " ;
                getline(cin,many_car[i].procucer);
              // cin.geline(many_car[i].procucer);
                cout << "Please enter the year made: ";
                cin >> many_car[i].year;
                cin.get();
        }
        
        cout << "Here is your collection: " << endl;
        for(int i = 0; i < num; i++)
        {
                cout << many_car[i].year << " " << many_car[i].procucer << endl;
        }
        delete[] many_car;
        return 0;
}
