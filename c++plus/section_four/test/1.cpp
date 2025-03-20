#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
        string First_name,Last_name;
        int age;
        char grade;

        cout << "What is your first name? ";
        getline(cin,First_name);
        cout << "What is your last name?";
        getline(cin,Last_name);
        cout << "What letter grade do you deserve?";
        cin >> grade;
        cout << "What is your age?";
        cin >> age;
        cout << "Name: " << Last_name << ", "<< First_name << endl;
        cout << "Grade: " <<  ++grade << endl;
        cout << "Age: " << age  << endl;

        return 0;
}
