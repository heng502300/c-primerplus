#include<iostream>
#include<string>

using namespace std;
struct William
{   
        string pizza_Company;
        double diameter;
        double height;
};


int main()
{   
        William la;
        cout << "name of pizza_Company: ";
        getline(cin,la.pizza_Company);
        cout << "diameter of pizza: ";
        cin >> la.diameter;
        cout << "height of pizza: " ;
        cin >> la.height;

        cout << "company: " << la.pizza_Company << endl;
        cout << "diameter: " << la.diameter << endl;
        cout << "height: " << la.height << endl;

        return 0;
}
