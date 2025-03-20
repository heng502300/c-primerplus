#include<iostream>

using namespace std;

const int Max = 5;

int fill_array(double ar[], int n);

void revalue(double factor,double ar[],int n);
void show_arr(const double arr[], int n);
int main()
{
    double arr[Max];
    int size = fill_array(arr,Max);
    show_arr(arr,size);
    if(size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;        
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";

        }
        revalue(factor,arr,size);
        show_arr(arr,size);
    }
    cout << "Done" << endl;
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int n)
{
    double temp;
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "Enter value #" << (i + 1) << ": " ;
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if(temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show_arr(const double arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << arr[i] << endl;
    }
}

void revalue(double factor,double ar[],int n)
{
    for(int i = 0; i < n; i++)
        ar[i] *= factor;
}
