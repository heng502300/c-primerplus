#include<iostream>
#include<array>

using namespace std;
const int ArSize = 10;

int main()
{
       // double arr[10];
       array<double,ArSize> donation;
       cout << "请输入10个数字,";
       cout << " 当输入<q>时退出： ";
      // cin >> donation;
      int i = 0;
      int j = 0;
      double sum = 0.0;
      double average = 0.0;
      int count = 0;
      cout << "#1: ";
      while((i < 10) && (cin >> donation[i])) 
      {

         // sum += donation[i];
          // i++;
         // cout << "# " << ++i << ": ";
         if(++i < ArSize)
            cout << "# " << i + 1 << ": ";
      }
      for(j = 0; j < i; j++)
        {
            sum += donation[j];
        }
      average = sum / i;
      cout << "sum = " << sum << endl;
      cout << "average = " << average << endl;
      for(j = 0; j < i; j++)
      {
         count  += donation[j] < average? 0:1;
      }
      cout << count << endl;
        return 0;
}

