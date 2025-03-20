#include<iostream>
#include<cctype>
using namespace std;

int main()
{
        char ch;
        cout << "please enter the char and repeat(@ strop): " << endl;
        while(cin >> ch,ch != '@')
        {
                ch = islower(ch)?toupper(ch):tolower(ch);
                if(isdigit(ch))
                    cout.put(ch);
                cout << ch;
        }
       cout << endl; 


        return 0;
}
