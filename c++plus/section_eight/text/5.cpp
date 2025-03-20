#include<iostream>

using namespace std;

template<typename T>
T max5(const T array[]);

int main()
{
    int arr[5] = {1,2,3,4,5};
    double arr1[5] = {1.0,2.0,3.0,4.0,5.1};
   // int a = 0;
   // double b = 0;
    cout << max5(arr) << endl;
    cout << max5(arr1) << endl;
    return 0;
}

template<typename T>
T max5(const T array[])
{
    T maxa = array[0];
    for(int i = 1; i < 5; i++)
    {   
        if(maxa < array[i])
            maxa = array[i];
    }
    return maxa;
}
