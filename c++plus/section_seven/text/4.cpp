#include<iostream>

using namespace std;

long long fact(int n);
int main()
{
    int n;
    cout << "Please enter a number(q to exit): ";
    while(cin >> n)
    {
        if(n < 0)
        {
            cout << "Please enter a zheng shu: ";
            continue;
        }
       cout << fact(n) << endl;
       cout << "Please enter a number: " ;
    }
    return 0;
}

long long fact(int n)
{
    
    return (n > 0)? n * fact(n - 1):1; 
        
}
