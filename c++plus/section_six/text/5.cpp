#include<iostream>
#include<string>
using namespace std;
const int j = 12;
int main()
{
        const string months [j] = 
        {
                
                "January",
                 "February",
                 "March",
                 "April",
                 "May",
                 "June",
                 "July",
                 "August",
                "September",
                "October",
                "November",
                "December",
        };
        int  sum = 0, arr[j];
        for( int i = 0; i < j; i++)
        {
                cout << months[i] << "销售：";
                cin >> arr[i];
        }
        

        for(int i = 0; i < j; i++)
        {
                sum += arr[i];
        }
        cout << "销售总额： " << sum << endl;
        return 0;
}
