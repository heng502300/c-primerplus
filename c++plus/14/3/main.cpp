#include<iostream>
#include<cstring>
#include"workermi.h"

const int SIZE = 5;

int main()
{
    using namespace std;

    Worker * lolas[SIZE];

    int ct;
    for (size_t ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter s: singer "
             << "t: singing waiter q: quit\n";
        cin >> choice;
        while (strchr("wstq",choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q:  ";
            cin >> choice;
        }
        if (choice == 'q')
        {
            break;
        }
        switch (choice)
        {
        case 'w':
            lolas[ct]  = new Waiter;    
            break;
        case 's':
            lolas[ct] = new Singer;
            break;
        case 't':
            lolas[ct] = new SingingWaiter;
            break;
        default:
            break;
        }
    cin.get();
    lolas[ct]->set();
    }
    
    cout << "\nHere is your staff: \n";
    int i;
    for (size_t i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->show();
    }
    for (size_t i = 0; i < ct; i++)
    {
        delete lolas[i];
    }
    
    


    return 0;
}