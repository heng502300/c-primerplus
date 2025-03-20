#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
        //char arr[256];
       string arr;
        cout << "Enter words (to stop, type the word done) : " << endl;
        int i = 0;
        while(cin >> arr && arr != "done")
        {
                i++;
        }
        cout << "You entered total of " << i << " words." <<endl;
        return 0;
}
