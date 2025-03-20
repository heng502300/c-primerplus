#include<iostream>

using namespace std;
void cha (const char * str, int n = 0);

int main()
{
    const char * st = "abcd";
    cha(st);
    cout << "--------" << endl;
    cha(st,3);
    cha(st);
    return 0;
}


void cha (const char * str, int n) 
{
    if(n == 0)
        cout << str << endl;
    else
    {
    static  int count = 1;
    for(int i = 0; i < count; i++)
    {
        cout << "char : " << str << endl;
    }
     count++;
    }
}
