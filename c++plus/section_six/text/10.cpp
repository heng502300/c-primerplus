#include<iostream>

using namespace std;

int main()
{
        cout << "Enter number of rows: ";
        int i;
        cin >> i;
        for(int j = 0; j < i; j++)
        {
               for(int a = j; a < i - 1; a++)
               {
                       cout << "。 \t";
               }
               
               for(int b = 0;  b <= j; b++)
                       cout << "* "; 

               cout << endl;
        }

        return 0;
}
