#include<iostream>
using namespace std;
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main()
{
    cout << "main() reports the following addresss: \n";
    cout << &tom << " = &tom " << &dick << " = &dick"
    << &harry << "= &harry " << endl;
    remote_access();
    return 0;
}
