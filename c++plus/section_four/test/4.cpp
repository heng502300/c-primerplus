#include<iostream>
#include<string>
#include<cstring>
using namespace std;

const int size = 20;

int main()
{
        //char first_name[size];
       // char last_name[size];
       string first_name,last_name;
        cout << "Enter your first name: ";
       // cin.getline(first_name,size);
        getline(cin,first_name);
        cout << "Enter your last name: ";
       // cin.getline(last_name,size);
       getline(cin,last_name);
        cout << "Here's the information in a single string: " << last_name << ", " << first_name << endl;
        return 0;
}
