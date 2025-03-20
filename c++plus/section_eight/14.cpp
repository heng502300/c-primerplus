#include<iostream>

using namespace std;

template <typename T>
void showArray(T arr[], int n);

template <typename T>
void showArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};



int main()
{
   int things[6] = {1,2,3,4,5,6};
   struct debts mr_E[3] =
   {
        {"Ima",2400.0},
        {"Ura",1300.0},
        {"Iby",1800.0}
   };
   double * pd[3];

   for(int i = 0; i < 3;i++)
        pd[i] = &mr_E[i].amount;

   cout << "Listing mr.e counts of things:\n";

   showArray(things,6);
   showArray(pd,3);
   return 0;
}


template <typename T>
void showArray(T arr[], int n)
{
    cout << "template A\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}


template <typename T>
void showArray(T * arr[],int n)
{
    cout << "template B\n";
    for(int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;
}
