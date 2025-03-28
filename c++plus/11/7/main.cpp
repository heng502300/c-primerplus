#include<iostream>
#include"complex0.h"

int main()
{
    using namespace std;
    Complex a(3.0,4.0);
    Complex c;

    cout << "Enter a complex number (q to quit): \n";
    while(cin>>c)
    {
        cout << "c is " << c << endl;
        cout << "complex conjugate is " << ~c << endl;
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "2 * c is " << 2 * c << endl;
        cout << "Enter a complex number (q to quit): " << endl;
    }
    cout << "Done\n";
    return 0;
}
