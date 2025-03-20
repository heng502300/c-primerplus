#include<iostream>
#include<cmath>
using namespace std;

struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};


polar rect_to_polar(rect t);
void show(polar t);
int main()
{
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace); 
        show(pplace);
        cout << "Next two number (q to quit) : ";
    }
    cout << "Done" << endl;
    return 0;
}


polar rect_to_polar(rect t)
{
    polar answer;

    answer.distance = sqrt(t.x * t.x + t.y * t.y);
    answer.angle = atan2(t.y,t.x);
    return answer;
}

void show(polar t)
{
    const double rad_to_deg = 57.29577951;
    cout << "distance = " << t.distance;
    cout << ", angle = " << t.angle * rad_to_deg;
    cout << " degrees " << endl;
}
