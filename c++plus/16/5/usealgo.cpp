#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <iterator>
#include <cctype>

using namespace std;

void display(const string &s)
{
    cout << s << " ";
}
string &ToLower(string &s);
char toLower(char c) { return tolower(c); }

int main()
{
    vector<string> words;
    cout << "Enter words (quit to q): ";
    string input;
    while(cin >> input && input != "q")
    {
        words.push_back(input);
    }
    cout << "You entered the following words: " << endl;
    for_each(words.begin(), words.end(), display);
    cout << endl;

    set<string> wordset;
    transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset,wordset.begin()), ToLower);
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;
    map<string, int> wordmap;
    set<string>::iterator it;
    for(it = wordset.begin(); it != wordset.end(); it++)
    {
        wordmap[*it] = count(words.begin(), words.end(), *it);
    }
    cout << "Word count: " << endl;
    for(it = wordset.begin(); it!= wordset.end(); it++)
    {
        cout << *it << ": " << wordmap[*it] << endl;
    }
    cout << "Bye." << endl;
    return 0;
}

string &ToLower(string &s)
{
    transform(s.begin(), s.end(), s.begin(), toLower);
    return s;
}