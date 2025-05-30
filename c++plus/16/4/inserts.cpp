#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<iterator>
using namespace std;
void output(const string & s)
{
    cout << s << " ";
}

int main()
{
    string s1[4] = {"fine", "fish", "fashion", "fate"};
    string s2[4] = {"busy", "bats"};
    string s3[4] = {"silly", "singers"};
    vector <string> words(4);
    copy(s1,s1+4,words.begin());
    for_each(words.begin(),words.end(),output);
    cout << endl;
    copy(s2, s2+2, back_insert_iterator<vector<string> >(words));
    for_each(words.begin(),words.end(),output);
    cout << endl;
    copy(s3, s3+2, insert_iterator<vector<string> >(words, words.begin()));
    for_each(words.begin(),words.end(),output);
    cout << endl;
    return 0;
}