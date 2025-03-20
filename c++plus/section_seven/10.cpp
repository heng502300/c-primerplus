#include<iostream>

using namespace std;

char * buildstr(char ch, int n);
int main()
{
    char ch;
    int times;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter a number: ";
    cin >> times;
    
    char *ps = buildstr(ch,times);

    cout << *ps << endl;
    delete [] ps;
    ps = buildstr('+',20);
    cout << *ps << "-DONE-" << *ps << endl;
    delete [] ps;
    return 0;
}

char * buildstr(char ch, int n)
{
    char *pstr = new char[n + 1];
    pstr[n] = '\0';
    while(n-- > 0)
        pstr[n] = ch;

    return pstr;
}
