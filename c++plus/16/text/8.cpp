#include <iostream>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    string name;
    set<string> Mat_friend;
    set<string> Pat_friend;
    cout << "please Mat enter friend q(to quit): ";

    while (getline(cin,name) && name != "q")  
    {
        Mat_friend.insert(name);
        cout << "next name: ";
    }

    cout << "please Pat friend q(to quit): ";

    while (getline(cin,name) && name != "q")
    {
        Pat_friend.insert(name);
        cout << "next name: ";
    }
    cout << "Mat's friends: ";
    copy(Mat_friend.begin(), Mat_friend.end(), ostream_iterator<string , char>(cout," "));
    cout << "\n";
    cout << "Pat's Friend: ";
    copy(Pat_friend.begin(), Pat_friend.end(), ostream_iterator<string, char>(cout , " "));
    cout << "\n";
    set<string> common_freind;
    //set_union(Mat_friend.begin(),Mat_friend.end(),Pat_friend.begin(),Pat_friend.end(),common_freind.begin());
    common_freind.insert(Mat_friend.begin(),Mat_friend.end());
    common_freind.insert(Pat_friend.begin(),Pat_friend.end());
    cout << "common friends: ";
    copy(common_freind.begin(),common_freind.end(),ostream_iterator<string, char>(cout , " "));
    cout << endl;
    return 0;
}
