#include<iostream>
#include"stack.h"

int main()
{
    using namespace std;
    char ch;
    Item item;
    Stack st;
    int total;
    cout << "a to add a customer." << endl;
    cout << "d to delete a customer." << endl;
    cout << "q to exit the menu." << endl;
    cout << "Please enter your choice: ";
    while(cin >> ch && tolower(ch) != 'q')
    {
        while(cin.get() != '\n')
            continue;
        if(tolower(ch) != 'a' && tolower(ch) != 'd')
        {
            cout << "Please enter a , d or q\n";
            continue;
        }
        switch(tolower(ch))
        {
            case 'a':
            {
                cout << "add Item fullname ";
                cin.getline(item.fullname,35);
                cout << "add Item payment ";
                while(!(cin >> item.payment))
                {
                    cin.clear();
                    while(cin.get() != '\n')
                        continue;
                    cout << "please enter a number " << endl;
                }
                if(st.isfull())
                    cout << "Can't add new customer full." << endl;
                else
                    st.push(item);
                 break;  
            }
            case 'd':
            {
                if(st.isempty())
                {
                    cout << "Can't delete old customer empty." << endl;
                }
                else
                {
                    st.pop(item);
                    total += item.payment;
                    cout << "Customer " << item.fullname << " will quit." << endl;
                    cout << "Now the total payments are: " << total << endl;
                }
                break;
            }
                    
        }
    }
    cout << "Bye " << endl;
    cout << "\n\n\n";

    cout << "a to add a customer." << endl;
    cout << "d to delete a customer." << endl;
    cout << "q to exit the menu." << endl;
    cout << "Please enter your choice: ";
    
    return 0;
}
