#include<iostream>
#include"string.h"
using namespace std;
//void callme1(Stringbad & rsb);
//void callme2(Stringbad sb);
const int Arsize = 10;
const int MaxLen = 81;
int main()
{
    //using namespace std;
   /* {
        cout << "Starting an inner block.\n";
        Stringbad headline1("Celery Stalks at Midnight");
        Stringbad headline2("Lettuce Prey");
        Stringbad sports("Spinach Leaves Bowl for Dollars");
        
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headlin1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: "<< headline2 << endl;
        cout << "Initialize one object to another:\n";
        Stringbad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        Stringbad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }*/
    String name;
    cout << "Hi, what's your name?\n>> ";
    cin >> name;

    cout << name << ", please enter up to " << Arsize
         << " short sayig <empty line to uit>:\n";
    String sayings[Arsize];
    char temp[MaxLen];
    int i;
    for(i = 0; i < Arsize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp,MaxLen);
        while(cin && cin.get() != '\n')
            continue;
        if(!cin || temp[0] == '\0')
            break;
        else 
            sayings[i] = temp;
    }
    int total = i;

    if(total > 0)
    {
        cout << "Here are your saying:\n";
        for(i = 0; i < total; i++)
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        int shortest = 0;
        int first = 0;
        for(i = 1; i < total; i++)
        {
            if(sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if(sayings[i] < sayings[first])
                first = i;
        }
        cout << "Shortest saying:\n" << sayings[shortest] << endl;
        cout << "First alphabetically:\n" << sayings[first] << endl;
        cout << "This program used " << String::HowMany() << " String objects. BYE.\n";
    }
    else
        cout << "End of main()\n";
    return 0;
}
/*
void callme1(Stringbad & rsb)
{
    cout << "String passed by reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(Stringbad sb)
{
    cout << "Stringbad passed by value:\n";
    cout << "   \"" << sb << "\"\n";
}
*/
