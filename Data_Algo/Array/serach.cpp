#include <iostream>
#include <vector>

using namespace std;

class solution
{
public:
    int serach(vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int ans;
        while (left <= right)
        {
            int middle = left + ((right - left)/2);
            if (nums[middle] < target)
            {
                left = middle + 1;
            }
            else if (nums[middle] >= target)
            {
                right = middle - 1;
            }
            else
                return middle;
        }
        return -1;
    }

};

int main()
{
    solution sol;
    vector<int> v = {1,3,5,9,10};
    int result = sol.serach(v,9);
    cout << result << endl;
    return 0;
}

//35T 34T