#include<iostream>

using namespace std;

const int HOUR_PER_DAY = 24;
const int MINUTE_PER_HOUR = 60;
const int SECOND_PER_MINUTE = 60;

int main()
{
    long long seconds;

    cout << "Enter the number of seconds :";
    cin >> seconds;
    cout << seconds << "seconds = ";
    cout << seconds / (SECOND_PER_MINUTE * MINUTE_PER_HOUR * HOUR_PER_DAY);
    cout <<"days，";

    cout << seconds/ (SECOND_PER_MINUTE * MINUTE_PER_HOUR ) % HOUR_PER_DAY;
    cout <<"hours,";
            
    cout << seconds % (SECOND_PER_MINUTE * MINUTE_PER_HOUR) / SECOND_PER_MINUTE;
    cout << " minutes, ";
    cout << seconds % SECOND_PER_MINUTE;
    cout << " seconds" << endl;
    return 0;
}
