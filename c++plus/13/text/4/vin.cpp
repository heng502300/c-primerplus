#include<cstring>
#include"vin.h"
#include<iostream>
using std::cout;
Vin::Vin() : Port("none","vintage",0)
{
    nickname = nullptr;
    year = 0;
}

Vin::Vin(const char *br, int b, const char *nn, int y) : Port(br,"vintage",b)
{
    nickname = new char[std::strlen(nn) + 1];
    std::strcpy(nickname, nn);
    year = y;
}

Vin::Vin(const Vin &vp) : Port(vp) //调用基类复制构造函数初始化派生类的基类对象数据;
{
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}

Vin &Vin::operator=(const Vin &vp)
{
    if (this == &vp)
    {
        return *this;
    }
    delete [] nickname;
    Port::operator=(vp);
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
    
}


void Vin::Show() const
{
    Port::Show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

ostream &operator<<(ostream &os, const Vin &vp)
{
    os << (const Port &)vp; //强制类型转换调用Port基类的重载输出流运算符方法;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}