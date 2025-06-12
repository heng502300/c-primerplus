#include <iostream>
#include <vector>

using namespace std;


class Solution
{
public:
    int removeElemnt(vector<int> &nums, int val)
    {
        int left = 0;
        int right = nums.size();
        while (left < right)
        {
            if (nums[left] == val)
            {
                nums[left] = nums[right];
                right--;
            }
            else    
                left++;
            
        }
        return  left;
        
    }
};

//26T 283T 844T