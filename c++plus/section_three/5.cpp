#include<iostream>

using namespace std;

int main()
{
    long long us_population, world_population;

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
   // double percent = us_population / world_population * 100ll;
    cout << "The population of the US is " <<(double) us_population / world_population * 100LL
         << "% of the world population."<< endl;
    return 0;
}
