#include<iostream>

using namespace std;

double change (double i)
{   
    double a;
   return  a = 1.8 * i + 32.0;
}

int main()
{
    double i;
    
    cout <<" please enter a Celsius vcalue :"<<endl;
    cin >> i;
    cout << change(i) << endl;
    return 0;
}
       
