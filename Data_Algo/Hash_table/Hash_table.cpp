#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using std::string;  using std::unordered_set;  using std::vector;
using std::unordered_map;

//template <typename T>
bool isAnagram(string s, string t)
{
    int record[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        record[s[i] - 'a']++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        record[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (record[i] != 0)
        {
            return false;
        }
        
    }
    return true;
}



 vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
 {
        unordered_set<int> result;
        unordered_set<int> nums_set(nums1.begin(),nums1.end());
        for(int num : nums2)
        {
            if(nums_set.find(num) != nums_set.end())
                result.insert(num);
        }
        //return static_cast<vector<int>>(result.begin(),result.end());
        return vector<int>(result.begin(),result.end());
 }

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int ,int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        auto iter = map.find(target - nums[i]);
        if(iter != map.end())
        {
            return {iter ->second,i};
        }
        map.insert(nums[i],i);
    }
    

}

int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    unordered_map<int,int> map;
    for(auto a: nums1)
    {
        for(auto b: nums2)
        {
            map[a+b]++;
        }
    }
    int count = 0;
    for(auto c: nums3)
    {
        for(auto d: nums4)
        {
            if (map.find(0 - (c + d)) != map.end())
            {
                count += map[0 - (c+d)];
            }
            
        }
    }
    return count;
}

int main()
{

    return 0;
}