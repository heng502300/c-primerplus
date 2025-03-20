#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct corporation
{
    string name;
    double money;
};

int main()
{   
    string filename;
    ifstream infile;
   // infile.open(filename);
   // int num;
    int grand_patrons = 0;
    int patrons = 0;
   // cout << "Please enter the donation number: " ;
   // (cin >> num).get();
    cout << "Please enter filename: ";
    getline(cin,filename);
    infile.open(filename);
    corporation *people = new corporation[num];
    if (!infile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    for(int i =0; i < num; i++)
    {
        cout << "Please enter "<< i + 1 <<" name; ";
        getline(cin,people[i].name);
        cout << "Please enter the amount of donation #" << i + 1 << ": ";
        while(!(cin >> people[i].money))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Please enter a number: ";
        }
        cin.get();
    }
    for(int i = 0; i < num; i++)
    {
        people[i].money > 10000? ++grand_patrons:++patrons;
    }
    if(grand_patrons != 0)
    {   
        for(int i = 0; i < num; i++)
        {
            if(people[i].money > 10000)
            {
                cout << "Name: " << people[i].name << endl;
                cout << "Money: " << people[i].money << endl;
            }
           // else
             //   cout << "none!" << endl;
        }                         
    }

     else
        cout << "none!" << endl;

    if(patrons != 0)
    {   
        for(int i = 0; i < num; i++)
        {
            if(people[i].money < 10000)
            {
                cout << "Name: " << people[i].name << endl;
                cout << "Money: " << people[i].money << endl;
            }
           // else
             //   cout << "none!" << endl;
        }
     }
    else
        cout << "none!" << endl;
    delete [] people;
    infile.close();
    return 0;
}
