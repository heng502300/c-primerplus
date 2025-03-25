#include<iostream>
#include<cctype>
#include"list.h"
void traverse(Item & item);
int main()
{
    using namespace std;
    char ch;
    Item temp;
    List mylist;

    cout << "The list include following functions:" << endl;
    cout << "a to add an number." << endl;
    cout << "v to visit every number." << endl;
    cout << "q to exit the menu." << endl;
    cout << "Please enter your choice: ";
    while(cin >> ch && tolower(ch) != 'q' )
    {
        while(cin.get() != '\n')
            continue;
        if(tolower(ch) != 'a' && tolower(ch) != 'v')
        {
           /* cin.clear();
            while(cin.get() != '\n')
                continue;
*/
            cout << "Please enter a, v or q: ";
            continue;
        }
        switch(tolower(ch))
        {
            case 'a':
            {
                cout << "please enter an number: ";
                while(!(cin >> temp))
                {
                    cin.clear();
                    while(cin.get() != '\n')
                        continue;
                     cout << "Please enter an number: ";
                }
                if(mylist.is_full())
                    cout << "The list is full." << endl;
                else
                {
                    mylist.add_data(temp);
                    cout << "add numberr " << temp << "successful " << endl;
                }
            }
            case 'v':
            {
                if(mylist.is_empty())
                    cout << "no number \n";
                else
                {
                    cout << " -------------" << endl;
                    mylist.visit(traverse);
                }
            }
        }
    }
    return 0;
}

void traverse(Item & item)
{
    std::cout << item <<  " " ;
}
