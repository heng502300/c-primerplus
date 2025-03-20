#include<iostream>

using namespace std;
const int strsize = 60;
const int NUM = 5;
struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};


void show();

int main()
{
    bop people[NUM] = {
        {"Wimp Macho", "Teacher", "WMA", 0},
        {"Raki Rhodes", "Junior Programmer", "RHES", 1},
        {"Celia Laiter", "Professor", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "HPAN", 1},
        {"Pat Hand", "Animal Keeper", "LOOPY", 2},
    };
    show();
    cout << "Enter your choice: ";
    char ch;
    while((cin >> ch) && (ch != 'q'))
    {
        switch(ch){
        case 'a': 
            for(int i = 0; i < NUM; i++)
                cout << people[i].fullname << endl;
            break;
        case 'b': 
            for(int i = 0; i < NUM; i++)
                cout << people[i].title << endl;
            break;
        case 'c': 
            for(int i = 0; i < NUM; i++)
                cout << people[i].bopname << endl;
            break;
        case 'd':
            for(int i = 0; i < NUM; i++)
            {   
                switch(people[i].preference)
               {
               case 0:
                    cout << people[i].fullname << endl;
                    break;
                case 1:
                    cout << people[i].title << endl;
                    break;
                case 2:
                    cout << people[i].bopname << endl;
                    break;
                }
            }
            default :cout << "illeagal input!" << endl;
                     break;
            }
    cout << "Next choice : ";
    }
    cout << "Bye" << endl;
    
    return 0;
}    

void show()
{
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name     b. display by title\t" << endl;
    cout << "c. display by bopname  d. display by preference\t" << endl;
    cout << "q. quit" << endl;
 }
