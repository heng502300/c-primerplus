#include<iostream>

using namespace std;

long distance(long i)
{
    long M;
    M = i / 220;
    return M;
}

int main()
 {
    long i;
    cin >> i;
    cout << distance(i) <<endl;
 }
