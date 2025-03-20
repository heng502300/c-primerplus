#include<iostream>

using namespace std;

int main()
{
        cout << "What year was your house built?" << endl;
        int year;
        cin >> year;
        cin.get();
        cout << "What is its street addaress?" << endl;
        char address[80];
        cin.getline(address,80);
        cout << "Year built: " << year << endl;
        cout << "Address: " << address <<endl;
        cout << "Done!\n";
        return 0;
}

