#include<iostream>
#include<cstring>
using namespace std;


const int Size = 15;
int main()
{
        char name1[Size];
        char name2[Size] = "c++owboy";


        cout << "Howdy! I'm " << name2;
        cout << "! What's your name?\n";
        cin >> name1;
        cout << "Well, " << name1 << ", your name has ";
        cout << strlen(name1) << " letters and is stored\n";
        cout << "in an array of " << sizeof(name1) << "bytes.\n";
        cout << "Your initial is " << name1[0] << ".\n";
        name2[3] = '\0';
        cout << "Here aer the first 3 characters of my name: ";
        cout << name2 << endl;
        return 0;
}
