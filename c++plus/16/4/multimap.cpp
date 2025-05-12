#include <iostream>
#include <string>
#include <map>
#include <algorithm>


using namespace std;

typedef int KeyType;
typedef pair<const KeyType, string> Pair;
typedef multimap<KeyType, string> MapType;
int main()
{
    MapType m;
    m.insert(Pair(415,"one"));
    m.insert(Pair(510,"uno"));
    m.insert(Pair(718,"two"));
    m.insert(Pair(718,"dos"));
    m.insert(Pair(415,"dsw"));
    m.insert(Pair(510,"tres"));

    cout << "Number of pairs 415: " << m.count(415) << endl;
    cout << "Number of pairs 718: " << m.count(718) << endl;
    cout << "Number of pairs 510: " << m.count(510) << endl;
    cout << "Area m\n";
    MapType::iterator it;
    for(it = m.begin(); it != m.end(); it++)
        cout << " " << (*it).first << ": " << (*it).second << endl;

    pair<MapType::iterator, MapType::iterator> p = m.equal_range(718);
    cout << "Range of pairs with key 718:\n";
    for(it = p.first; it!= p.second; it++)
        cout << " " << (*it).first << ": " << (*it).second << endl;
    return 0;
}