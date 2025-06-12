#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class solution
{
public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int n = nums.size();
        if(n == 0)
        {
            return 0;
        }
        int sum = 0;
        int end = 0;
        int start = 0;
        int result = n;
        for (end = 0; end < n; end++)
        {
            sum += nums[end];
            while (sum >= s) 
            {
                result = min(result, end - start + 1);
                sum -= nums[start];
                start++;
            }
            
        }
        return result == n ? 0: result;
    }
};

//904T  ww