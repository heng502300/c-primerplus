#include<iostream>
#include"tabtenn0.h"

int main()
{
    using namespace std;
    TableTennisPlayer player1("chuck", "blizzard",true);
    RatePlayer player2(1140,"tara", "boomdea",false);
    player2.Name();
    if(player2.HasTable())
        cout << ": has a table." << endl;
    else
        cout << ": hasn't a table." << endl;
    

    player1.Name();
    if(player1.HasTable()) 
        cout << ": has a table." << endl;
    else
        cout << ": hasn't a table." << endl;

    cout << "Name: ";
    player2.Name();
    cout << "; Rating: " << player2.Rating() << endl;
    RatePlayer player3(1212,player1);
    cout << "Name: ";
    player3.Name();
    cout << "; Rating: " << player3.Rating() << endl;
    return 0;
}
