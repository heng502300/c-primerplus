#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int reduce(long ar[], int n);
void print(long ar[],int n);
int main()
{
    long arr[] = {1, 2, 4,3, 5, 5, 6, 3, 7, 8, 8, 9, 10, 10};
    int n = sizeof(arr) / sizeof(long);
    print(arr, sizeof(arr) / sizeof(long));
    //print(arr);
    reduce(arr, sizeof(arr) / sizeof(long));
    print(arr, sizeof(arr) / sizeof(long));
    //print(arr);
    return 0;
}

int reduce(long ar[], int n)
{
    sort(ar,ar+n);
    return static_cast<int> (unique(ar,ar+n) - ar);

}

void print(long ar[], int n)
{
    for(int i = 0; i < n ; i ++ )
        cout << ar[i] << " ";
    cout << endl;
}