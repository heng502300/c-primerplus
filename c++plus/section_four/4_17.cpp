#include<iostream>

using namespace std;

int main()
{
        int nights = 1001;
        int*  pt = new int;
        *pt = 1001;

        cout << "nights value = ";
        cout << nights << ": location " << &nights << endl;


        cout << "pt value = ";
        cout << *pt << ": location "<< pt  << endl;

        double* pd = new double;
        *pd = 10000001.0;


        cout << "pd value = ";
        cout << *pd << ": location " << pd << endl;
        cout << "location of pointer pd " << &pd << endl;
        return 0;
}

