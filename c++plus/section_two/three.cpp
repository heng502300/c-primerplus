#include <iostream>
#include<string>
using namespace std;

void Three(int i)
{
    int a = i;
    while(a)
    {
        cout << "Three blind mice" << endl;
        a--;
    }
} 

void See(int i)
{
    int a = i;
    while(a)
    {
         cout<< "See how they run" << endl ;
         a--;
    }
}

int main()
{
   // cout << Three(2) << endl;
   // cout << See(2) << endl;  
   Three(2);
   See(2);
   return 0;    
}
