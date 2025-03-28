#include<iostream>
#include"mytime.h"

int main()
{
    using namespace std;
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout << "planning time :";
    planning.show();
    cout << endl;
    cout << "coding time : ";
    coding.show();
    cout << endl;
    cout << "fixing time : ";
    fixing.show();
    cout << endl;
    
    total = coding + fixing;
    cout << "coding.sum(fixing) time :";
    total.show();
    cout << endl;

    total = total - fixing;
    cout << "----------" << endl;
    total.show();
    cout << endl;

    total = 2 * total; 
    cout << "----------" << endl;
    total.show();
    cout << endl;
    
    
    cout << "----------" << endl;
    cout << total << endl;

    return 0;
}

