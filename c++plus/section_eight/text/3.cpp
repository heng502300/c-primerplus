#include<iostream>
#include<cctype>
#include<string>
using namespace std;

void str(string & strr);
int main()
{
   // return 0;
    string strr;
    cout << "Please enter a string and q exit ";
    while(getline(cin,strr) && strr != "q")
    {
        str(strr);
        cout << strr << endl;
        cout << "Please enter a string and q exit ";
    }
    return 0;
}

void str(string & strr)
{
   // string name;
   // name = 
   for(int i = 0; i < strr.size(); i++)
   {
        strr[i] = toupper(strr[i]);
   }
//   cout << str << endl;
}
