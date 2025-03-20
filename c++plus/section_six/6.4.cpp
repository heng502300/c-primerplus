#include<iostream>
using namespace std;

int main()
{
        cout << "This program may reformat your hard disk\n"
                "and destroy all your data.\n"
                "Do you wish to cntinue? <y/n> " ;

        char ch;
        cin >> ch;
        if(ch == 'y' || ch == 'Y')
                cout << " You wre warned!\a\a\n";
        


        return 0;
}
