#include<iostream>
#include<array>
using namespace std;

int main()
{
        array<double,3> grade;
        cout << "请输入第一次40米跑成绩： ";
        cin >> grade[0];

        cout << "请输入第二次40米跑成绩： ";
        cin >> grade[1];

        cout << "请输入第三次40米跑成绩： ";
        cin >> grade[2];

        cout << "first grade: " << grade[0] << endl;
        cout << "second grade: " << grade[1] << endl;
        cout << "three grade: " << grade[2] << endl;

        double average = (grade[0] + grade[1] + grade[2]) / 3.0;
        cout << "average: " << average << endl;
        return 0;
}
