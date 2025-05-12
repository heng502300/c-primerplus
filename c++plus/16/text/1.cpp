#include <iostream>
#include <string>


bool ispalindrome(const std::string & str);
int main()
{
    using namespace std;
    string str;
    cout << "Enter a string: ";
    while (getline(cin, str) && str != "q")
    {
        cout << str << endl;
        cout << (ispalindrome(str) ? "is" : "is not")
             << " a palindrome.\n";
        cout << "Enter next string (q to quit): ";
    }
    return 0;
}

bool ispalindrome(const std::string & str)
{
    return str == std::string(str.rbegin(), str.rend());
}