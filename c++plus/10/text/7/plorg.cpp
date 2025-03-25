#include<iostream>
#include<cstring>
#include"plorg.h"

Plorg::Plorg()
{
    strcpy(name,"Plorga");
}

void Plorg::reset_ci()
{
    using std::cin;
    using std::cout;
    int my_ci;
    cout << "Please enter a ci: ";
    while(!(cin >> my_ci))
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "please a number: ";
    }
    this->CI = my_ci;
}

void Plorg::show() const
{
    using std::cout;
    using std::endl;
    cout << "name: \t" << name << endl;
    cout << "CI: \t" << CI << endl;
}

void Plorg::create_new_plorg(const char * newname)
{
    strncpy(name,newname,19);
    name[19] = '\0';
    CI = 50;
}
