#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<climits>
#include"vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps = 0;
    double target = 50;
    double dstep = 2.0;
    unsigned long i, n, maxv, minv;
    double average = 0.0;
  //  ofstream fout;

//    fout.open("text.txt");

   /* cout << "Enter target distane (q to quit): ";
    while(cin >> target && target != 'q')
    {
        cout << "Enter step length: ";
        if(!(cin >> dstep))
        {
            break;
        }
        fout << "Target distane: " << target;
        fout << "Step size: " << dstep << endl;
        fout << "0: "<< result << endl;
        while(result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep,direction,Vector::POL);
            result = result + step;
            steps++;
            fout << steps << ": " << result << endl;
        }
        fout << "After " << steps << " steps, the subject ";
        fout << "has the followinglocation:/n";
        fout << result << endl;
        result.polar_mode();
        fout << "or/n";
        fout << result << endl;
        fout << "Averager outward distance per step = ";
        fout << result.magval() / steps << endl;
        fout << endl;

        cout << "After " << steps << " steps, the subject ";
        cout << "has the followinglocation:/n";
        cout << result << endl;
        result.polar_mode();
        cout << "or/n";
        cout << result << endl;
        cout << "Averager outward distance per step = ";
        cout << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0,0.0);
        cout << "Enter target distane ( q to quit): ";

      //  cout << "After " << steps << " steps, the subject ";
    }
    cin.clear();
    while(cin.get() != '\n');  
     continue;
   */
   //fout.close();
   
    cout << "Target distance: " << target << ", ";
    cout << "Step length: " << dstep << endl;
    cout << "Please your enter running time: ";
    while(!(cin >> n))
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Please enter an number: ";
    }
    i = 0; maxv = 0, minv = ULONG_MAX;
    while(i < n)
    {
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        maxv = maxv < steps ? steps : maxv;
        minv = minv > steps ? steps : minv;
        average += steps;
        cout << "Time #1" << i + 1 << ":" << endl;
        cout << "After " << steps << " steps, the subject ";
        cout << "has the following location:\n";
        cout << result << endl;
        result.polar_mode();  
        cout << " or\n";
        cout << result << endl;
        cout << "Average outward distance per step = ";
        cout << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        ++i;
    }

    cout << "The maximum steps are: " << maxv << endl;
    cout << "The minmum steps are: " << minv << endl;
    cout << "The average steps are: " << average / n << endl;
    cout << "Bye\n";
        
    return 0;
}
