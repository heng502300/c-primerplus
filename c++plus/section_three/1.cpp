#include<iostream>

using namespace  std;

const int INCH_PER_FEET = 12;

int main()
{
    cout << "请输入你的身高： ";
    cin >> height;
    cout << "你的身高是 ：" << height / INCH_PER_FEET
     << "英尺和" << height % INCH_PER_FEET   << "英寸"<< endl; 
    return 0;
}

