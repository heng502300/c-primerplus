#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// void printVec(const vector<string> & v)
// {
//     for(int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

void printVec(const vector<int> &v)
{
    for(auto elem : v)
    {
        cout << elem << " ";
    }
    cout << endl;
}

int main()
{
    // vector<string> names;
    // names.push_back("Alice");
    // names.push_back("Bob");
    // printVec(names);
    vector<int> vec {3,2,6,5,4,8,9,7,2};
    printVec(vec);
    sort(vec.begin(), vec.end());
    printVec(vec);
    return 0;
}