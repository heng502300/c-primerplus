#include <iostream>
#include<cstring>
using namespace std;
template<typename T>
T maxn(T arr[],int n);

template<>
const char * maxn(const char *str[],int n);

int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    double arr2[4] = {1.1,2.2,3.3,4.4};
    cout << maxn(arr1,6) << endl;
    cout << maxn(arr2,4) << endl;
 const char *test3[5] = {"123", "12345", "123456", "abcdefg", "xio"};
    cout << maxn(test3,5) << endl;
    return 0;
}

template<typename T>
T maxn(T arr[], int n)
{
    T a = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(a < arr[i])
            a = arr[i];
    }
    return a;
}
template<>
const char * maxn(const char *str[],int n)
{
    const char *maxv = *str;

    for (int i = 1; i < n; i++)
    {
        if (strlen(maxv) < strlen(str[i]))
        {
            maxv = str[i];
        }
    }
    return maxv;
}
