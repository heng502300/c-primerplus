#include<iostream>
#include<cmath>
#include"1.h"
using namespace std;
polar rect_to_polar(rect xypos)
{
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y,xypos.y);
    return answer;
}

void show_polar(polar dapos)
{
    const double rad_to_des = 57.29;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * rad_to_des;
    cout << " degrees\n";
}
