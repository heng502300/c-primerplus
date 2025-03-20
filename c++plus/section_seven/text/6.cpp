#include<iostream>

using namespace std;
const int ArSize = 10;
int Fill_array(double arr[],int n);
void Show_array(const double arr[], int n);
void Reverse_array(double *arr, int n);
int main()
{
    double ar[ArSize];
    int n = Fill_array(ar,ArSize);
    cout << n << endl;
    Show_array(ar,n);
    cout << endl;
    Reverse_array(ar,n);
    Show_array(ar,n);
    cout << endl;
    Reverse_array(ar + 1,n - 2);
    Show_array(ar,n);
    cout << endl;
    return 0;
}

int Fill_array(double arr[],int n)
{
    int i = 0;
    cout << "#1 ";
    while(i < n && cin >> arr[i])
    {
        if(++i < ArSize)
            cout << "#" << i + 1 << " ";
    }
    return i;
}

void Show_array(const double arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
}


void Reverse_array(double *arr, int n)
{
    //double temp;
    for(int i = 0, j = n - 1; i < j; i++ ,j--)
        swap(arr[i],arr[j]);
    
}
