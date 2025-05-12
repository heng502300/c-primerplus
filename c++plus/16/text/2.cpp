#include <iostream>
#include <string>
#include <cctype>

bool ispalindrome(const std::string & str);
std::string Tolower(std::string &str);
int main()
{
    using namespace std;
    string str;
    cout << "Enter a string: ";
    while (getline(cin, str) && str != "q")
    {
        str = Tolower(str);
        cout << str << endl;
        cout << (ispalindrome(str) ? "is" : "is not")
             << " a palindrome.\n";
        cout << "Enter next string (q to quit): ";
    }
    return 0;
}

std::string Tolower(std::string &str)
{

    std::string s;
    for(auto &ch : str)
    {
        if(!isspace(ch) && !ispunct(ch))
            str += tolower(ch);
    }
    return s;
}

bool ispalindrome(const std::string & str)
{
    return str == std::string(str.rbegin(), str.rend());
}