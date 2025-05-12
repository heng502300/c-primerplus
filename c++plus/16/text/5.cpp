#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

template <class T>
int reduce(T ar[], int n);

template <class T>
void print(T ar[], int n);

int main()
{
    int arr[] = {1,1,2,2,3,4,5};
    string str[] = {"aaa", " aaa" , "bbb" , " ccc"}; 
    int n = sizeof(arr) / sizeof(int);
    int s = sizeof(str) / sizeof(str[0]);
    print(arr,n);
    print(str,s);
    reduce(arr,n);
    reduce(str,s); 
    print(arr,n);
    print(str,s);
    return 0;
}

template<class T>
int reduce(T ar[], int n)
{
    sort(ar,ar+n);
    int len = unique(ar,ar + n) - ar;
    return len;
}

template<class T>
void print(T ar[], int  n)
{
    for(int i = 0; i < n; i ++)
        cout << ar[i] << " ";
    cout << endl;
}