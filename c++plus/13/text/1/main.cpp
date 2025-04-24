#include<iostream>
#include"classic.h"

using namespace std;
void Bravo(const Cd &d)
{
    d.Report();
}
int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2("Piano Sonata in B flat", "Alfred Brendel", "Philips", 2, 57.17);
 //   Classic c3(c2);
   Cd *pcd = &c1;
    cout << "C1 object and C2 object:\n";
    c1.Report();
    c2.Report();
    cout << "Using pointer to base class:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report(); 
 
    cout << "Using function Bravo:\n";
    Bravo(c1);
    Bravo(c2);

    cout << "Using assignment:\n";
    Classic c3;
    c3 = c2; // assignment      
    c3.Report();
    //c1 = c3;
    //cout << "After assignment:\n";
    //c1.Report();
    return 0;
}