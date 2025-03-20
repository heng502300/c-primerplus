#include<iostream>
#include<string>

using namespace std;
const int size = 5;
void display(const string sa[], int n);
int main()
{
    string list[size];
    cout << "Enter your " << size << "favorite string: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << i + 1 << ": ";
        getline(cin,list[i]);
    }
    cout << "Your list: " << endl;
    display(list,size);
    return 0;
}

void display(const string *sa, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}

