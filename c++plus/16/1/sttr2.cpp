#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string empty;
    string small = "bit";
    string larger = "Elephants are a girl's best friend";
    cout << "Size of strings:\n";
    cout << "\tempty: " << empty.size() << endl;
    cout << "\tsmall: " << small.size() << endl;
    cout << "\tlarger: " << larger.size() << endl;

    cout << "Capacity of strings:\n";
    cout << "\tempty: " << empty.capacity() << endl;
    cout << "\tsmall: " << small.capacity() << endl;
    cout << "\tlarger: " << larger.capacity() << endl;
    cout << "Resizing larger to 40:\n";
    larger.resize(40);
    cout << "Capacity of larger: " << larger.capacity() << endl;

    return 0;
}