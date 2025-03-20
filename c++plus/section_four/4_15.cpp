#include<iostream>

using namespace std;

int main()
{
       /* int updates = 6;
        int * p_updates;
        p_updates = &updates;

        cout << "Values: updates = " << updates;
        cout << "Values: p_updates = " << *p_updates << endl;

        cout << "Address: updates = " << &updates;
        cout << "Address: p_updates = " << p_updates << endl;

        *p_updates = *p_updates + 1;
        cout << "Values: p_updates = " << *p_updates << endl;

        cout << "Values: updates = " << updates;
       */

        int higgens = 5;
        int* pt = &higgens;
        *pt = *pt + 1;
        cout << higgens << endl;
        cout << *pt << endl;
        return 0;
}
