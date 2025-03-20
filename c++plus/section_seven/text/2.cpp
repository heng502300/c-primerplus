#include<iostream>

using namespace std;
const int ArSize = 10;


int arr(double arr[],int n);
void show(double arr[],int n);
double average(double arr[],int n);
int main()
{
    double ar[ArSize];
   int n = arr(ar,ArSize);
   cout << n << endl;
   show(ar,n);
   double aver = average(ar,n);
   cout << aver << endl;
    return 0;
}

int arr(double arr[],int n)
{
    int i = 0;
    cout << "Please enter #1: ";
    while(i < n && cin >> arr[i])
    {
        if(++i < ArSize)
        {
            cout << "Please enter #" << i + 1 << ": ";
        }
    }
    return i;
}

void show(double arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double average(double arr[],int n)
{
    double ave;
    double sum;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    ave = sum/n;
    return ave;
}
