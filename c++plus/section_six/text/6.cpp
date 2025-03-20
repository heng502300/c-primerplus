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
        int total = 0, sum[3], arr[3][j];
        for( int i = 0; i < 3; i++)
        {
                cout << "第 "<< i + 1 << "年 " << endl;
                for(int a = 0; a < j; a++)
                {
                    cout << months[a] << "销售：";
                    cin >> arr[i][a];
                }
        }
        
       
        for(int i = 0; i < 3; i++)
        {
                for(int a = 0; a < j; a++)
                {
                     sum[i] += arr[i][a];
                }    
                cout << "第 "<< i + 1  << "年销售总额： " << sum[i] << endl;
                
        }
       
         total = sum[0] + sum[1] + sum[2]; 
         cout << "三年总销售额：" << total << endl;
        return 0;
}
