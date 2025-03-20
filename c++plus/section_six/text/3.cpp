#include<iostream>

using namespace std;

int main()
{
        int i;
        cout << "please enter a number: ";
        cin >> i;
        int sum = 0;
        do
        {
                sum += i;
                cout << "sum= " << sum << endl; 
                cin >> i;
        }while(i != 0);
        
        return 0;
}
