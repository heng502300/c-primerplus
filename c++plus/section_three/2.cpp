#include<iostream>

using namespace std;

const int INCH_PER_FEET = 12;
const double MILE = 2.54e-2;
int main()
{
        int heigth;
        cout << "请输入身高 " ;
        cin >> height;
        cout << "身高为 ：" << height / INCH_PER_FEET << "英尺和" 
             << height % INCH_PER_FEET << "英寸" << endl;
        cout << "身高为： " << height * INCH_PER_FEET << "米" << endl;

        

        return 0;
}

