#include<iostream>
#include"move.h"

int main()
{
    using namespace std;
    Move temp = Move{1,1};
    cout << "Starting values: " << endl;
    temp.showmove();
    cout << "x + 1 , y + 1 " << endl;
    temp.reset(2,2);
    temp.showmove();
    cout << "add " << endl;
    temp = temp.add(temp);
    temp.showmove();
    return 0;
}
