#include<iostream>

using namespace std;
enum cha {c, p, t, g}; 
void show();
int main()
{
    show();
    char ch;
    while(cin >> ch)
    {   
        switch(ch)
        {
            case 'c': cout << "A maple a carnivore."; break;
            case 'p': cout << "A maple a pianist."; break;
            case 't': cout << "A maple a tree."; break;            
            case 'g': cout << "A maple a game."; break;
            default : cout << "Please enter a c, p, t, or g: " << ch << endl;
        }
        if( ch != 'c' || 'p' || 't' || 'g')
        {               
             continue;
        }
    }

    return 0;
}    

void show()
{
    cout << "Please enter one of the following choices: \n";
    cout << "c) carnivore       p) pianist \t" << endl;
    cout << "t) tree            g) game \t\n";
}
