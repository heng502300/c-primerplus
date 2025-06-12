#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class String
{
public:
    void reverseString(string& s);
    inline void reversee(string& s, int start, int end)
    {
        for (int i = start, j = end; i < j; i++, j-- )
        {
            swap(s[i], s[j]);
        }
        
    }
    string reverseStr(string s, int k);
    string replaceSpace(string s);
    void removeExtraSpace(string& s);
    string reverseWords(string s);
    string reverseLeftWords(string s, int n);

};

void String::reverseString(string& s)
{
    int len = s.size();
    for (int i = 0 , j = len - 1; i < len / 2; i++, j--)
    {
        swap(s[i], s[j]);
    }
    
}

string String::reverseStr(string s, int k)
{
    int len = s.size();
    for (int i = 0; i < len; i += (2 * k))
    {
        if (i + k <= len)
        {
            reverse(s.begin() + i, s.begin() + i +k);
        }
        else
            reverse(s.begin() + i, s.end());
    }
    return s;
}

string String::replaceSpace(string s)
{
    int count = 0;
    int oldSize = s.size();
    for (int i = 0; i < oldSize; i++)
    {
        if(s[i] == ' ')
            count++;
    }

    s.resize(oldSize + count * 2);
    int newSize = s.size();
    for (int i = newSize - 1, j = oldSize - 1; i > j; i--, j--)
    {
        if (s[j] != ' ')
        {
            s[i] = s[j];
        }
        else
        {
            s[i] = '0';
            s[i - 1] = '2';
            s[i - 2] = '%';
            i -= 2;
        }
        
    }
    return s;
}

void String::removeExtraSpace(string& s)
{
    int slow = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            if (slow != 0)
            {
                s[slow++] = ' ';
            }
            while (i < s.size() && s[i] != ' ')
            {
                s[slow++] = s[i++];
            }
            
        }
    }
    s.resize(slow);
}

string String::reverseWords(string s)
{
    removeExtraSpace(s);
    reversee(s, 0, s.size() - 1);
    int start = 0;
    for (int i = 0; i <= s.size(); i++)
    {
        if(i == s.size() || s[i] == ' ')
        {
            reversee(s,start,i - 1);
            start = i + 1;
        }
    }
    return s;
    
}

string String::reverseLeftWords(string s, int n)
{
    reverse(s.begin(), s.begin() + n);
    reverse(s.begin() + n,  s.end());
    reverse(s.begin(), s.end());
    return s;
}

//  KMP算法
void getNext(vector<int> &next, const string &s)
{
    int j = -1;
    next[0] = j;
    for (int i = 1; i < s.size(); i++)
    {
        while (j >= 0 && s[i] != s[j + 1])
        {
            j = next[j];
        }
        if (s[i] == s[j + 1])
        {
            j++;
        }
        next[i] = j;
    }
    
}
int strStr(string haystack, string needle)
{
    if (needle.size() == 0)
    {
        return 0;
    }
    vector<int> next(needle.size());
    getNext(next, needle);
    int j = -1;
    for (int i = 0; i < haystack.size(); i++)
    {
        while (j >= 0 && haystack[i] != needle[j + 1])
        {
            j = next[j];
        }
        if(haystack[i] == needle[j + 1])
            j++;
        if(j == needle.size() - 1)
            return (i - needle.size() + 1);
    }
    return -1;
    
}

bool repeatedSubstringPattern(string s)
{
    string t = s + s;
    t.erase(t.begin());
    t.erase(t.end() - 1);
    if(t.find(s) != string::npos)
        return true;
    return false;
}

bool repeatedSubstringPattern(string s) {
        if(s.size() == 0)
        return false;
        vector<int> next;
        getNext(next, s);
        int len = s.size();
        if(next[len - 1] != -1 && len % (len - (next[len - 1] + 1)) == 0)
            return true;
        return false;
    }

int main()
{   
    String s;
    string str = "  hello word  ";
    //s.reverseString(str);
    //str = s.reverseStr(str,2);
    str = s.reverseWords(str);
    cout << str << endl;

    return 0;
}