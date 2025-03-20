#include<iostream>

using namespace std;

const int change  = 60;

int main()
{
        double degrees, minutes, seconds,total;
        cout << "Enter a latitude in degrees, minutes, dan seconds: " << endl;
        cout << "First, enter the degrees: ";
        cin >> degrees;
        cout << endl;
        cout << "Next, enter the minutes of arc: ";
        cin >> minutes;
        cout << endl;
        cout << "Finally, enter the seconds of arc: ";
        cin >> seconds;
        cout << endl;
        
        total = degrees + (minutes / change) +(seconds / (change * change));
        cout << degrees <<"degrees, " << minutes << "minutes, " << seconds << "seconds = "
             << total << "degrees "<< endl;  
        
        return 0;
}
