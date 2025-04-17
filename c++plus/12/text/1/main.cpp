#include<iostream>
#include<cstring>
#include"cow.h"

using namespace std; 

int main()
{
    Cow temp1;
    Cow temp2("aaa","bb",20);
    Cow temp3(temp2);
    cout << "Here are some cows:" << endl;
    cout << "The first:" << endl;
    temp1.showCow();
    cout << "The second:" << endl;
    temp2.showCow();
    cout << "The third:" << endl;
    temp3.showCow();
    temp1 = temp3;
    cout << "After assignment for temp1:" << endl;
    temp1.showCow();
    cout << endl; 
    return 0;
}
