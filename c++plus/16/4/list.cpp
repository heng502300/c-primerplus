#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;
void output(int n)
{
    cout << n << " ";
}

int main()
{
    list <int> one(5,2);
    list<int> two;
    int stuff[5] = {1,2,4,8,16};
    two.insert(two.begin(),stuff,stuff+5);
    int more[6] = {6,4,2,4,6,6};
    list<int> three(two);
    three.insert(three.end(),more,more+6);
    
    cout << "List one: ";
    //ostream_iterator<int,char> out(cout," ");
    // for(auto c: one)
    // {
    //     cout << c << " ";
    // }
    for_each(one.begin(),one.end(),output);
    cout << endl;
    cout << "List two: ";
    for(auto c: two)
    {
        cout << c << " ";
    }
    cout << endl;
    cout << "List three: ";
    for(list<int>::iterator it = three.begin(); it != three.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    three.remove(2);
    cout << "List three minus 2s: ";
    for_each(three.begin(),three.end(),output);
    cout << endl;
    three.splice(three.begin(),one);
    cout << "List three after splice: ";
    for_each(three.begin(),three.end(),output);
    cout << endl;
    cout << "List one: ";
    for_each(one.begin(),one.end(),output);
    cout << endl;
    three.unique();
    cout << "List three after unique: ";
    for_each(three.begin(),three.end(),output);
    cout << endl;
    three.sort();
    two.sort();
    three.merge(two);
    cout << "Sorted two merged into three: ";
    for_each(three.begin(),three.end(),output);
    cout << endl;
    
    return 0;
}