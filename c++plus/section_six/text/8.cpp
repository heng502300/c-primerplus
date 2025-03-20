#include<iostream>
#include<cstring>
using namespace std;

int main()
{
        char arr[256];
        cout << "Enter words (to stop, type the word done) : " << endl;
        int i = 0;
        while(cin >> arr && strcmp("done",arr))
        {
                i++;
        }
        cout << "You entered total of " << i << " words." <<endl;
        return 0;
}
