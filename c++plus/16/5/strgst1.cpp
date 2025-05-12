#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string letters;
    cout << "Enter the letters to be permuted (quit to q): ";
    while(cin >> letters && letters != "q")
    {
        cout << "Permutations of " << letters << endl;
        sort(letters.begin(), letters.end());
        cout << letters << endl;
        while(next_permutation(letters.begin(), letters.end()))
        {
            cout << letters << endl;
        }
        cout << "Enter the letters to be permuted (quit to q): ";
    }
    return 0;
}