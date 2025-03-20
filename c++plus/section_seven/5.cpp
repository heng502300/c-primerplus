#include<iostream>

using namespace std;

const int ArSize = 8;

int sum_arr(int *begin, int *end);
int main()
{

        int cookies[ArSize] = {1,2,4,16,32,64,128};
        int sum = sum_arr(cookies,cookies + ArSize);

        cout << "total cookies = " << sum << endl;

        return 0;
}

int sum_arr(int *begin, int *end)
{
        int *pt;
        int total = 0;               
        for(pt = begin; pt !=  end; pt++)   
             total =total +  *pt;         
        return total;
}                       
