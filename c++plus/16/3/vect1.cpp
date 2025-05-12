#include<iostream>
#include<string>
#include<vector>

using namespace std;
const int NUM = 5;

int main()
{
    vector<string> vost(NUM);
    vector<int> list(NUM);
    cout << "Enter your " << NUM << " favorite astronomical sights and 0-10 list:\n";
    int i;
    for(i = 0; i < NUM; i++)
    {
        cout << "Enter light number: " << i + 1 << ": ";
        getline(cin, vost[i]);
        cout << "Enter your list number: ";
        cin >> list[i];
        cin.get();
    }
    cout << "Thank you. You entered the following:\n";
    for(i = 0; i < NUM; i++)
    {
        cout << vost[i] << ": " << list[i] << endl;
    }
    cout << "Reporting done.\n";
    return 0;
}