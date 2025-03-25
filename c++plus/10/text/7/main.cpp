#include<iostream>
#include"plorg.h"

int main()
{
    using namespace std;
    Plorg temp;
    cout << "Starting information: " << endl;
    temp.show();
    cout << "New plorh: " << endl;
    temp.create_new_plorg("zhang");
    temp.show();
    cout << "reset ci:  " << endl; 
    temp.reset_ci();
    temp.show();
    
    return 0;
}

