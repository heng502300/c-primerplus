#include<iostream>

using namespace std;

int main()
{
        int i, j;
        cout << "请输入两个整数: ";
        cin >> i >> j;
        int sum = 0;
        for(i; i <= j; i++)
                sum += i;
        cout << "sum= " << sum << endl;


        return 0;
}
