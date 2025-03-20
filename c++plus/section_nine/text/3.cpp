#include<iostream>
#include<new>
#include<cstring>
using namespace std;

const int BUF = 512;
static char buffer[BUF];
struct chaff
{
    char dross[20];
    int slag;
};
int main()
{
    char temp[20];
    chaff * str = new(buffer) chaff[2];
    for(int i = 0; i < 2; i++)
    {
        cout << "Enter dross of chaff # 1: ";
        cin.getline(temp,20);
        strcpy(str[i].dross,temp);
        cout << "Enter slag of chaff # 1: ";
        while(!(cin >> str[i].slag))
        {
            cin.clear();
//            cin.clear(cin.get() != '\n');
            if(cin.get() != '\n')
                continue;
            cout << "Please enter number: "; 
        }
        cin.get();
    }
     for (int i = 0; i < 2; i++)
    {
        cout << "Chaff #" << i + 1 << ": " << endl;
        cout << "Dross: " << str[i].dross << endl;
        cout << "Slag: " << str[i].slag << endl;
    }
    return 0;
}
