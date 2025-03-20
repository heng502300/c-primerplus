#include<iostream>
#include<array>
using namespace std;

const int ArSize = 16;

int main()
{
        array<long double,ArSize> arr;
        arr[1] = arr[0] = 1LL;
        for(int i = 2; i <= 100; i++)
                arr[i] = i * arr[i-1];
        for(int i = 0; i <= 100; i++)
                cout << i << "!= " << arr[i] << endl;
        return 0;
}
