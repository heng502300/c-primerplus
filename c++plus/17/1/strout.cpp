#include <iostream>
#include <sstream>
#include <string>

int main()
{
    using namespace std;
    ostringstream outstr;
    string hdisk;
    cout << "What's your name of your hard disk? ";
    getline(cin, hdisk);
    int capacity;
    cout << "What's its capacity in GB? ";
    cin >> capacity;
    outstr << "The hard disk " << hdisk << " has a capacity of " << capacity << " GB.\n";
    string result = outstr.str();
    cout << result;
    return 0;

}