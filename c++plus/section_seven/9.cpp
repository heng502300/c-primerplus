#include<iostream>

using namespace std;

unsigned int c_in_str(const char * str, char ch);

int main()
{
    char mmm[15] = "minimum";

    char *wail = "ululate";

    unsigned int mm = c_in_str(mmm,'m');
    unsigned int uu = c_in_str(wail,'u');

    cout << mm << endl;
    cout << uu << endl;

    return 0;
}

unsigned int c_in_str(const char * str, char ch)
{
    unsigned count = 0;
    while(*str)
    {
        if(*str == ch)
            count++;
        str++;
    }
    return count;
}
