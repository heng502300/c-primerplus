#include<iostream>

using namespace std;

enum{red,orange,yellow,g,b,v,i};

int main()
{
        cout << "Enter color code (0-6)" ;
        int code;
        cin >> code;
        while(code >= red && code <= i)
        {
                switch(code)
                {
                        case red: cout << "red";
                                  break;
                        case orange: cout << "orange";
                                   break;
                        default : "red";
                                  break;
                }

                cout << "Enter color code: ";
                cin >> code;
        }





        return 0;
}
